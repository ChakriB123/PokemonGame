#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Balbasaur : public Pokemon {
        public:
            Balbasaur();
        private:
            void vineWhip(Pokemon& target);

        };

    }
}