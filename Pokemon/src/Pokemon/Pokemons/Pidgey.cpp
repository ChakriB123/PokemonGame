#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}

        void Pidgey::wingAttack(Pokemon* target) {
            cout << name << " used WING ATTACK!\n";
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
        void Pidgey::attack(Pokemon* target)
        {
            wingAttack(target);
        }
    }
}