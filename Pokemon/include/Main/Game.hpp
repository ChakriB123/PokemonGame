#pragma once
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Character/Player.hpp"
#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
using namespace N_Utility;
using namespace N_Player;
using namespace N_Pokemons;
using namespace N_Battle;
using namespace N_Pokemon;
namespace N_Main {
	class Game {
	private:
		Grass forestGrass;
		Pokemon* wildPokemon;
	public:
		Game();
		~Game();
		void gameLoop(Player* player);
		void visitPokeCenter(Player* player);
	};
}