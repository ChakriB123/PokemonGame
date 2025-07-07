#include "../../include/Battle/WildEncounterManager.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()
namespace N_Battle {

    WildEncounterManager::WildEncounterManager() {
        srand(time(0)); // Seed the random number generator
    }

    Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
        int randomIndex = rand() % grass.wildPokemonList.size();

        Pokemon* wildPokemon = grass.wildPokemonList[randomIndex];

        return wildPokemon;
    }
}