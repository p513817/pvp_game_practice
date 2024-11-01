#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <memory>
#include <unordered_map>
#include "Role.h"
#include "Ability.h"
#include "Equipment.h"

class Player {
public:
    std::string m_name;
    RoleType m_role_type;
    Ability m_ability;
    EquipmentType m_equipment_type;

    Player(const std::string& n, RoleType r);
    bool isWeakAgainst(Player& other);
    void display(); 
    void equip(EquipmentType item);

};

#endif
