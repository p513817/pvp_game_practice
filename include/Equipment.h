#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "Ability.h"
#include <string>
#include <unordered_map>

// Declare Equipment Type enum
enum class EquipmentType {
    Sword,
    Shield,
    Staff
};

// Declare equipment abilities map and functions
extern const std::unordered_map<EquipmentType, Ability> equipmentAbilities;

// Helper function
std::string getEquipmentName(EquipmentType role_type);
Ability getEquipmentAbility(EquipmentType equipment_type);

#endif
