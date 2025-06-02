#pragma once
#include "BattleState.hpp"
#include "Player.hpp"
#include "Utility.hpp"
class BattleManager {
public:
    void startBattle(Player &player, Pokemon &wildPokemon);
private:
    BattleState battleState;
    void battle();
    void handleBattleOutcome();
    void updateBattleState();
};