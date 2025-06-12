#pragma once
#include<string>
#include "../../include/Pokemon/Pokemon.hpp"

using namespace std;
namespace N_Pokemon {
    class IStatusEffect {
    public:
        // Apply the effect (e.g., poison, burn)
        virtual void applyEffect(Pokemon* target) = 0;

        // Get the name of the effect
        virtual string getEffectName() = 0;

        // Apply the changes due to effect after the end of each turn
        // Returns true if the Pokémon can move, else false
        virtual bool turnEndEffect(Pokemon* target) = 0;

        // Remove the effect
        virtual void clearEffect(Pokemon* target) = 0;

        virtual ~IStatusEffect() = default;
    };
}