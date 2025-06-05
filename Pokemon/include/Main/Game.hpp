#pragma once
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Character/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
using namespace N_Utility;
using namespace N_Player;
using namespace N_Battle;

class Game {
private:
	Grass forestGrass;
public:
	Game();
	void gameLoop(Player& player);
};