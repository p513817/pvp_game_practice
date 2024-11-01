#ifndef ROLE_H
#define ROLE_H

#include <string>
#include <unordered_map>
#include "Ability.h"

// Enumeration for RoleType
enum class RoleType {
    Warrior,
    Knight,
    Sorcerer
};

// Declare role abilities and weaknesses
extern const std::unordered_map<RoleType, Ability> roleAbilities;
extern const std::unordered_map<RoleType, RoleType> weaknessRelations;

// Declare functions for role information
std::string getRoleName(RoleType role_type);
Ability getRoleAbility(RoleType role);

#endif
