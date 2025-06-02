#pragma once
#include "BattleState.hpp"
#include "../../include/Character/Player.hpp"
#include "../../include/Utility/Utility.hpp"
class BattleManager {
public:
    void startBattle(Player &player, Pokemon &wildPokemon);
private:
    BattleState battleState;
    void battle();
    void handleBattleOutcome();
    void updateBattleState();
};