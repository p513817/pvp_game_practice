#ifndef ABILITY_H
#define ABILITY_H

struct Ability {
    int hp;
    int mp;
    int attack;
    float critical_prob;

    Ability(int h = 0, int m = 0, int a = 0, float crit = 0.0) 
        : hp(h), mp(m), attack(a), critical_prob(crit) {}
};


#endif