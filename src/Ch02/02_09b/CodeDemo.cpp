// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character{
    std::string name;
    int level;
    character_role role;
};

int main(){
    
    game_character Nagappan;
    Nagappan.name = "Momo";
    Nagappan.level = 99;
    Nagappan.role = character_role::protagonist;

    std::cout << "Name of the character is " << Nagappan.name << ", level is " << Nagappan.level << ", role is " << (int) Nagappan.role << "." << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
