#include <iostream>
using namespace std;

enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};
enum class PokemonType {
    Fire,
    Electric,
    Water,
    Earth,
    Grass,
    Normal
};
class Pokemon
{
    public:
    string name;
    PokemonType type;
    int health;

    Pokemon() {

    }
    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    void attack(){ 
        cout << name << ": attacks with a powerful move!\n"; 
    }

};

class Player {
public:
    // Attributes
    string name;
    Pokemon chosenPokemon;

    Player()
    {

    }

    // Method to choose a Pokemon
    void choosePokemon(int choice) {
        switch ((PokemonChoice)choice) {
        case PokemonChoice::Charmander:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;
        case PokemonChoice::Bulbasaur:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
            break;
        case PokemonChoice::Squirtle:
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";

            break;
        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            cout << "Professor Oak: Just kidding! Let's go with Pikachu, A Energetic pupper in the making!\n";

            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";

    }
};

class ProfessorOak {
    
public:
    string name;

   
    void greetPlayer(Player& player) {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }

    void offerPokemonChoices(Player& player) {
        cout << name << ": First, tell me, what’s your name?\n";
        cin >> player.name ;
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << name << ": Choose wisely...\n"; std::cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
    }
};

int main() {

    ProfessorOak professor;
    Pokemon placeholderPokemon;
    Player player;


    professor.name = "Professor Oak";

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world";

    return 0;
}