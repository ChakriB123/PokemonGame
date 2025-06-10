#pragma once
#include <vector>
#include "../../include/Pokemon/Grass.hpp" // Assuming the Grass struct is defined here 
using namespace N_Pokemon;
namespace N_Battle {
	class WildEncounterManager {
	public:
		WildEncounterManager();
		Pokemon* getRandomPokemonFromGrass(const Grass& grass);
	};
}