#include <iostream>
#include <string>
#include <memory>
#include <unordered_map>
#include "Role.h"
#include "Ability.h"
#include "Player.h"

int main() {

    Player player("Player1", RoleType::Warrior);
    player.display();

    // Equip a Sword
    player.equip(EquipmentType::Shield);
    player.display();

    // Equip a Shield
    player.equip(EquipmentType::Sword);
    player.display();

    return 0;
    return 0;
}
