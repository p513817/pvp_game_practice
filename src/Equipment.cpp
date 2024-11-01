#include "Equipment.h"

// Define the equipment abilities map
const std::unordered_map<EquipmentType, Ability> equipmentAbilities = {
    {EquipmentType::Sword, Ability(150, 30, 50, 0.1)},
    {EquipmentType::Shield, Ability(200, 40, 40, 0.05)},
    {EquipmentType::Staff, Ability(100, 100, 20, 0.15)}
};

// Function to get the equipment name as a string
std::string getEquipmentName(EquipmentType equipment_type) {
    switch (equipment_type) {
        case EquipmentType::Sword: return "Sword";
        case EquipmentType::Shield: return "Shield";
        case EquipmentType::Staff: return "Staff";
        default: return "Unknown";
    }
}

// Function to get the ability of the specified equipment type
Ability getEquipmentAbility(EquipmentType equipment_type) {
    auto it = equipmentAbilities.find(equipment_type);
    return (it != equipmentAbilities.end()) ? it->second : Ability();
}
