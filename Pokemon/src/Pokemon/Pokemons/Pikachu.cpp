#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>
using namespace std;

namespace N_Pokemon {
    namespace N_Pokemons {


        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}

        void Pikachu::thunderShock(Pokemon* target) {
            cout << name << " used THUNDER SHOCK!\n";
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
        void Pikachu::attack(Pokemon* target)
        {
            thunderShock(target);
        }
    }
}