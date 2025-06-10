#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Balbasaur::Balbasaur() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Balbasaur::vineWhip(Pokemon* target) {
            cout << name << " used VINE WHIP!\n";
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

        void Balbasaur::attack(Pokemon* target)
        {
            vineWhip(target);
        }
    }
}