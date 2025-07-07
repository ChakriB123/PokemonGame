#include "../../include/Character/Player.hpp"

namespace N_Player {
    Player::Player() {
        name = "Trainer";
         
    }

    Player::Player(string p_name) {
        name = p_name;
     
    }

    void Player::choosePokemon(int choice) {
        switch ((PokemonChoice)choice) {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = new Charmander();
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = new Balbasaur();
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = new Squirtle();
            break;
        default:
            chosenPokemon = new Pikachu();
            break;
        }
        std::cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
        Utility::waitForEnter(); // Wait for user to press Enter before proceeding
    }
}