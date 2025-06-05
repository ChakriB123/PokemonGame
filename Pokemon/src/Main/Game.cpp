#include "../../include/Main/Game.hpp"

#include <iostream>

using namespace std;


Game::Game() {
    forestGrass = { "Forest",
                   {Pokemon("Pidgey", PokemonType::NORMAL, 40,20),
                    Pokemon("Caterpie", PokemonType::BUG, 35,15),
                    Pokemon("Zubat", PokemonType::POISON, 30,25)},
                   70 };
}
void Game::gameLoop(Player& player) {
    BattleManager battleManager;
    bool keepPlaying = true;

    while (keepPlaying) {
        Utility::clearConsole();
        std::cout << "What would you like to do next, " << player.name << "?\n";
        std::cout << "1. Battle Wild Pokémon\n";
        std::cout << "2. Visit PokeCenter\n";
        std::cout << "3. Challenge Gyms\n";
        std::cout << "4. Enter Pokémon League\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        Utility::clearInputBuffer();

        switch (choice) {
        case 1: {
            WildEncounterManager encounterManager;
            Pokemon wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
            battleManager.startBattle(player, wildPokemon);
            break;
        }
        case 2: {
            std::cout << "You head to the PokeCenter.\n";
            player.chosenPokemon.heal(); // Heal the player's Pokémon
            std::cout << player.chosenPokemon.name << "'s health is fully restored!\n";
            break;
        }
        case 5: {
            keepPlaying = false;
            break;
        }
        default: {
            std::cout << "That's not a valid choice. Try again!\n";
            break;
        }
        }

        Utility::waitForEnter();
    }

    std::cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

