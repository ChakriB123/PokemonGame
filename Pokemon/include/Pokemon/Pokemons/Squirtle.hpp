#pragma once
#include "../Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;
namespace N_Pokemon {
    namespace N_Pokemons {

        class Squirtle : public Pokemon {
        public:
            Squirtle();
        private:
            void waterSplash(Pokemon* target);
            void attack(Pokemon* target) override;
        };

    }
}