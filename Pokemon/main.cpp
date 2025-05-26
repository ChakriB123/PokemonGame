#include <iostream>
using namespace std;

enum class PokemonChoice {
    Charmander = 1,
    Bulbasaur,
    Squirtle,
    Pikachu
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
        name = "Unknown";
        type = PokemonType::Normal;
        health = 50;
        cout << "A new Pokemon has been created with the default constructor!\n";
    }

   
    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }

   
    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

  
    ~Pokemon() {
        cout << name << " has been released.\n";
    }

    void attack() {
        cout << name << " attacks with a powerful move!\n";
    }

};

class Player {
public:
    // Attributes
    string name;
    Pokemon chosenPokemon;

    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon(); // Using the default Pokemon constructor
        cout << "A new player named " << name << " has been created!\n";
    }

    // Parameterized constructor
    Player(string p_name, Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        cout << "Player " << name << " has been created!\n";
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

    ProfessorOak()
    {
        name = "ProfessorOak";
    }

   
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

    Pokemon defaultPokemon; // Using default constructor
    Pokemon charmander("Charmander", PokemonType::Fire, 100); // Using parameterized constructor

    cout << "Pokemon Details:\n";
    cout << "Name: " << defaultPokemon.name << "\nType: " << (int)defaultPokemon.type << "\nHealth: " << defaultPokemon.health << "\n";
    cout << "Name: " << charmander.name << "\nType: " << (int)charmander.type << "\nHealth: " << charmander.health << "\n";

    // Task 2: Test the copy constructor
    Pokemon bulbasaur("Bulbasaur", PokemonType::Grass, 100); // Create a Pokemon
    Pokemon bulbasaurCopy = bulbasaur; // Copy the Pokemon
    cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    // Modify the copy
    bulbasaurCopy.health = 80;
    cout << "After Modification:\n";
    cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    // Task 3: Test the destructor
    {
        Pokemon squirtle("Squirtle", PokemonType::Water, 100); // Pokemon will be destroyed at the end of this scope
    } // Destructor will be called here

    // Continue with the main flow of the game
    ProfessorOak professor;
    Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Conclude the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";


    return 0;
}