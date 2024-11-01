#include "Role.h"

// Define the role abilities map
const std::unordered_map<RoleType, Ability> roleAbilities = {
    {RoleType::Warrior, Ability(150, 30, 50, 0.1)},
    {RoleType::Knight, Ability(200, 40, 40, 0.05)},
    {RoleType::Sorcerer, Ability(100, 100, 20, 0.15)}
};

// Define the role weaknesses map
const std::unordered_map<RoleType, RoleType> weaknessRelations = {
    {RoleType::Warrior, RoleType::Sorcerer},
    {RoleType::Knight, RoleType::Warrior},
    {RoleType::Sorcerer, RoleType::Knight}
};

// Function to get the role name as a string
std::string getRoleName(RoleType role_type) {
    switch (role_type) {
        case RoleType::Warrior: return "Warrior";
        case RoleType::Knight: return "Knight";
        case RoleType::Sorcerer: return "Sorcerer";
        default: return "Unknown";
    }
}

// Function to get the ability of the specified role type
Ability getRoleAbility(RoleType role) {
    auto it = roleAbilities.find(role);
    return (it != roleAbilities.end()) ? it->second : Ability();
}
