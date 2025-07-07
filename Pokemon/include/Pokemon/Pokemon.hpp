#pragma once
#include <string>
#include <vector>
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/move.hpp"

using namespace std;
using namespace N_Utility;

namespace N_Pokemon {
    
        struct Move;
        enum class PokemonType;//forward 

        class Pokemon {
        protected:
            string name;
            PokemonType type;
            int health;
            int maxHealth;
            int attackPower;
            vector<Move> moves;

        public:
            Pokemon();
            Pokemon(string p_name, PokemonType p_type, int p_maxHealth, vector<Move> p_moves);
            Pokemon(Pokemon* other);

            string getName();
            int getHealth();
            virtual void attack(Move selectedMove, Pokemon* target) = 0;
            void heal();
            void takeDamage(int Damage);
            bool isFainted()const;
            void reduceAttackPower(int reduced_damage);
            
            // Base implementation for selecting and using a move
            void printAvailableMoves();
            void selectAndUseMove(Pokemon* target);
            int selectMove();
            void useMove(Move selectedMove, Pokemon* target);
        };
    }
