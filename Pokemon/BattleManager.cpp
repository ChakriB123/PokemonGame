#include "BattleManager.hpp"
#include <iostream>


void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
    battleState.playerPokemon = &player.chosenPokemon;
    battleState.wildPokemon = &wildPokemon;
    battleState.playerTurn = true;  // Player starts first
    battleState.battleOngoing = true;

    cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle();
}

void BattleManager::battle() {
    while (battleState.battleOngoing) {
        if (battleState.playerTurn) {
            // Player's turn to attack
            battleState.playerPokemon->attack(*battleState.wildPokemon);
        }
        else {
            // Wild Pokémon's turn to attack
            battleState.wildPokemon->attack(*battleState.playerPokemon);
        }

        // Update the battle state after the turn
        updateBattleState();

        // Switch turns
        battleState.playerTurn = !battleState.playerTurn;

        Utility::waitForEnter();
    }


    // Determine and display the outcome of the battle
    handleBattleOutcome();
}


void BattleManager::handleBattleOutcome() {
    if (battleState.playerPokemon->isFainted()) {
        cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\n";
    }
    else {
        cout << "You defeated the wild " << battleState.wildPokemon->name << "!\n";
    }
}

void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
}