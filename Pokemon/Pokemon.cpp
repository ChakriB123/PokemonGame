#include "Pokemon.hpp"
#include <iostream>
#include "PokemonType.hpp"
using namespace std;

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

}
// Copy constructor
Pokemon::Pokemon(const Pokemon& other) {
	name = other.name;
	type = other.type;
	health = other.health;
}

// Destructor
Pokemon::~Pokemon() {
	// Destructor logic (if any) goes here
}

void Pokemon::attack(Pokemon& target) {
	int damage = 10; // Fixed damage for simplicity
	cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
	target.TakeDamage(damage); // Apply damage to the target Pokémon
}
void Pokemon::heal() {
	health = maxHealth; // Restore health to full
}

void Pokemon::TakeDamage(int damage){
	health -= damage; 
	if (health < 0) {
		health = 0;
	}
}

bool Pokemon::isFainted(){
	return health <= 0;
}