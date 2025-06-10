#pragma once
#include "BattleState.hpp"
#include "../../include/Character/Player.hpp"
#include "../../include/Utility/Utility.hpp"
using namespace N_Player;
using namespace N_Utility;
namespace N_Battle {
    class BattleManager {
    public:
        void startBattle(Player* player, Pokemon* wildPokemon);
    private:
        BattleState battleState;
        void battle();
        void handleBattleOutcome();
        void updateBattleState();
    };
}