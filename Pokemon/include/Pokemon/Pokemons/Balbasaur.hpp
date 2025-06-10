#pragma once
#include "../Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;

namespace N_Pokemon {
    namespace N_Pokemons {

        class Balbasaur : public Pokemon {
        public:
            Balbasaur();
        private:
            void vineWhip(Pokemon* target);
            void attack(Pokemon* target) override;

        };

    }
}