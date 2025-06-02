#include "BattleManager.hpp"
#include "Utility.hpp"
#include <iostream>


void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
    cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        // Player attacks first
        playerPokemon.attack(wildPokemon);

        // Check if wild Pokémon fainted
        if (!wildPokemon.isFainted()) {
            // Wild Pokémon attacks back
            wildPokemon.attack(playerPokemon);
        }

        // Pause to show the result of each turn
        Utility::waitForEnter();
    }

    // Determine and display the outcome of the battle
    handleBattleOutcome(playerPokemon, !playerPokemon.isFainted());
}


void BattleManager::handleBattleOutcome(Pokemon& playerPokemon, bool playerWon) {
    if (playerWon) {
        cout << playerPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        cout << "Oh no! " << playerPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        cout << "Game Over.\n";
    }
}