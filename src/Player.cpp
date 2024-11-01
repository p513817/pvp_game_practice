#include <iostream>
#include <string>
#include <memory>
#include <unordered_map>
#include "Role.h"
#include "Ability.h"
#include "Player.h"
#include "Equipment.h"

Player::Player(const std::string& n, RoleType r) 
    : m_name(n), m_role_type(r), m_ability(getRoleAbility(r)) {}

bool Player::isWeakAgainst(Player& other) { 
    auto it = weaknessRelations.find(m_role_type);
    if (it != weaknessRelations.end()) {
        return it->second == other.m_role_type;
    }
    return false;
}

// Display player stats
void Player::display() {
    std::cout << m_name << " - Role: " << getRoleName(m_role_type)
              << ", HP: " << m_ability.hp
              << ", MP: " << m_ability.mp
              << ", Attack: " << m_ability.attack
              << ", Critical Prob: " << m_ability.critical_prob << std::endl;
}

void Player::equip(EquipmentType equipment_type) {
    Ability prev_equip_ability {getEquipmentAbility(m_equipment_type)};    
    Ability curr_equip_ability {getEquipmentAbility(equipment_type)};
    m_equipment_type = equipment_type;
    m_ability = Ability(
        m_ability.hp - prev_equip_ability.hp + curr_equip_ability.hp,
        m_ability.mp - prev_equip_ability.mp + curr_equip_ability.mp,
        m_ability.attack - prev_equip_ability.attack + curr_equip_ability.attack,
        m_ability.critical_prob - prev_equip_ability.critical_prob + curr_equip_ability.critical_prob
    );
}