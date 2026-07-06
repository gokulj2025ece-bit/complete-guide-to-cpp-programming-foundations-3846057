// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

#define Max 500
//#define debug

int main(){
    //int32_t ammo = 100;
    int32_t ammo = Max / 5;
    uint8_t health_items = 5;
#ifdef debug 
std::cout <<"Game starts...." << std::endl; 
//comment out "3define debu" and check the change 
#endif
    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
