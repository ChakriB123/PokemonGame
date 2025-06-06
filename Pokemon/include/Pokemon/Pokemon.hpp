#pragma once
#include <string>
#include "../../include/Pokemon/PokemonType.hpp"

using namespace std;

namespace N_Pokemon {
    enum class PokemonType;//forward 

    class Pokemon {
    public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

        // Default constructor
        Pokemon();

        // Parameterized constructor
        Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);

        // Copy constructor
        Pokemon(const Pokemon& other);

        // Destructor
        ~Pokemon();

        void attack(Pokemon& target);
        void heal();
        void takeDamage(int Damage);
        bool isFainted();

    };
}