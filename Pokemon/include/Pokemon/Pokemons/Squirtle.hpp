#pragma once
#include "../Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;
namespace N_Pokemon {
    namespace N_Pokemons {

        class Squirtle : public Pokemon {
        public:
            Squirtle();
            void attack(Move selectedMove, Pokemon* target) override;
        };

    }
}