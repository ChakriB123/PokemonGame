#include "../../include/Pokemon/Pokemon.hpp"

#include <iostream>
using namespace std;

namespace N_Pokemon {
		// Default constructor
		Pokemon::Pokemon() {
			name = "Unknown";
			type = PokemonType::NORMAL;
			health = 50;
		}

		// Parameterized constructor
		Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower) {
			name = p_name;
			type = p_type;
			health = p_maxHealth;
			maxHealth = p_maxHealth;
			attackPower = p_attackPower;

		}
		// Copy constructor
		Pokemon::Pokemon(Pokemon* other) {
			name = other->name;
			type = other->type;
			health = other->health;
			maxHealth = other->maxHealth;
			attackPower = other->attackPower;
		}


		//void Pokemon::attack(Pokemon& target) {
		//	int damage = 10; // Fixed damage for simplicity
		//	cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
		//	//cout << "target health after attack" << target.health <<endl;
		//	target.takeDamage(damage); // Apply damage to the target Pokémon
		//}
		void Pokemon::heal() {
			health = maxHealth; // Restore health to full
		}

		void Pokemon::takeDamage(int damage) {
			health -= damage;
			if (health < 0) {
				health = 0;
			}
		}

		bool Pokemon::isFainted()const {
			return health <= 0;
		}

		string Pokemon::getName()
		{
			return name;
		}
		int Pokemon::getHealth()
		{
			return health;
		}

	}
