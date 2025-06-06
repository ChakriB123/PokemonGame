#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
using namespace N_Pokemon;
namespace N_Battle {

    struct BattleState {
        Pokemon* playerPokemon;  // Pointer to the player's Pokémon
        Pokemon* wildPokemon;    // Pointer to the wild Pokémon
        bool playerTurn;          // True if it's the player's turn, false otherwise
        bool battleOngoing;       // True if the battle is still ongoing
    };
}