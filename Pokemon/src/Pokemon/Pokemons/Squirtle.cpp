#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Squirtle::Squirtle() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Squirtle::waterSplash(Pokemon* target) {
            cout << name << " used WATER SPLASH!\n";
            N_Utility::Utility::waitForEnter();

            cout << "...\n";
            N_Utility::Utility::waitForEnter();

            target->takeDamage(attackPower);

            if (target->isFainted())
                cout << target->getName() << " fainted!\n";
            else
                cout << target->getName() << " has " << target->getHealth() << " HP left.\n";
            N_Utility::Utility::waitForEnter();
        }

        void Squirtle::attack(Pokemon* target)
        {
            waterSplash(target);
        }
    }
}