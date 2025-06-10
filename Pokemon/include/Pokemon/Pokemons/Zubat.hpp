#pragma once
#include "../Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"
using namespace N_Utility;
namespace N_Pokemon {
    namespace N_Pokemons {

        class Zubat : public Pokemon {
        public:
            Zubat();
        private:
            void supersonic(Pokemon* target);
            void attack(Pokemon* target) override;
        };

    }
}