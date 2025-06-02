#pragma once
#include <string>
using namespace std;

enum class PokemonType;//forward 

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;

    // Default constructor
    Pokemon();

    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);

    // Copy constructor
    Pokemon(const Pokemon& other);

    // Destructor
    ~Pokemon();

    void attack(Pokemon& target);
    void heal();
    void TakeDamage(int Damage);
    bool isFainted();

};