#pragma once
#include <string>
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Utility/Utility.hpp"
#include "iostream"
using namespace N_Utility;
using namespace std;

namespace N_Player {
    class Player {
    public:
        string name;
        Pokemon chosenPokemon;

        Player(); // Default constructor
        Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

        void choosePokemon(int choice); // Method to choose a Pokemon
    };
}