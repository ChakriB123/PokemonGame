#include "../../include/Main/Game.hpp"

#include <iostream>

using namespace std;

namespace N_Main {

    Game::Game() {
        forestGrass = { "Forest",
                       {new Pidgey(),
                        new Caterpie(),
                        new Zubat()},
                       70 };
    }
    void Game::gameLoop(Player* player) {
        BattleManager battleManager;
        bool keepPlaying = true;

        while (keepPlaying) {
            Utility::clearConsole();
            cout << "What would you like to do next, " << player->name << "?\n";
            cout << "1. Battle Wild Pokémon\n";
            cout << "2. Visit PokeCenter\n";
            cout << "3. Challenge Gyms\n";
            cout << "4. Enter Pokémon League\n";
            cout << "5. Quit\n";
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;

            Utility::clearInputBuffer();

            switch (choice) {
            case 1: {
                WildEncounterManager encounterManager;
                wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                battleManager.startBattle(player, wildPokemon);
                break;
            }
            case 2: {
                cout << "You head to the PokeCenter.\n";
                player->chosenPokemon->heal(); // Heal the player's Pokémon
                cout << player->chosenPokemon->getName() << "'s health is fully restored!\n";
                break;
            }
            case 5: {
                keepPlaying = false;
                break;
            }
            default: {
                cout << "That's not a valid choice. Try again!\n";
                break;
            }
            }

            Utility::waitForEnter();
        }

        cout << "Goodbye, " << player->name << "! Thanks for playing!\n";
    }

    Game::~Game() {
        delete(wildPokemon);
    }
}

