#pragma once
#include <iostream>
#include "../../include/Character/Player.hpp"
#include "../../include/Utility/Utility.hpp"
using namespace N_Utility;
using namespace N_Player;
using namespace std;

namespace N_Character {
	class ProfessorOak {
	public:
		string name;

		ProfessorOak(string p_name);
		void greetPlayer(Player& player);
		void offerPokemonChoices(Player& player);
		void explainMainQuest(Player& player);
	};
}