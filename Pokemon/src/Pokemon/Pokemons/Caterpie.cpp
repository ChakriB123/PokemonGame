#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {

    namespace N_Pokemons {

        using namespace std;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

        void Caterpie::bugBite(Pokemon* target) {
            cout << name << " used BUGBITE!\n";
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
        void Caterpie::attack(Pokemon* target)
        {
            bugBite(target);
        }
    }
}