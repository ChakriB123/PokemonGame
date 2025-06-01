#pragma once
#include <vector>
#include "Grass.hpp" // Assuming the Grass struct is defined here 

class WildEncounterManager {
public:
	WildEncounterManager();
	Pokemon getRandomPokemonFromGrass(const Grass& grass);
};