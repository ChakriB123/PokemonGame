#pragma once
#include "../../../include/Utility/Utility.hpp"
#include "../Pokemon.hpp"
using namespace N_Utility;

namespace N_Pokemon {
    namespace N_Pokemons {

        class Charmander : public Pokemon {

        public:
            Charmander();
            void attack(Move selectedMove, Pokemon* target) override;

        };

    }
}