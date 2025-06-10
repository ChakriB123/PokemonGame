#pragma once
#include "../Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;

namespace N_Pokemon {
    namespace N_Pokemons {

        class Caterpie : public Pokemon {
        public:
            Caterpie();
        private:
            void bugBite(Pokemon* target);
            void attack(Pokemon* target) override;
        };

    }
}