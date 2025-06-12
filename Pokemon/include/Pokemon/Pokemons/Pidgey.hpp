#pragma once
#include "../Pokemon.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "../../../include/Battle/BattleManager.hpp"
using namespace N_Utility;
using namespace N_Battle;

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon {
        public:
            Pidgey();
            void attack(Move selectedMove, Pokemon* target) override;
        };

    }
}