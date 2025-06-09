#pragma once
#include <string>
#include "../../include/Pokemon/PokemonType.hpp"

using namespace std;

namespace N_Pokemon {
    enum class PokemonType;//forward 

    class Pokemon {
    protected:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

     public:
        Pokemon();
        Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);
        Pokemon(const Pokemon& other);
     
        string getName();
        virtual void attack(Pokemon& target) = 0;
        void heal();
        void takeDamage(int Damage);
        bool isFainted()const;

    };
}