#pragma once
#include <string>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "iostream"
using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Pokemons;
using namespace std;

namespace N_Player {
    class Player {
    public:
        string name;
        Pokemon* chosenPokemon;

        Player(); // Default constructor
        Player(string p_name); // Parameterized constructor

        void choosePokemon(int choice); // Method to choose a Pokemon
    };
}