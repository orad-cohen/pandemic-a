#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Scientist.hpp"

using namespace pandemic;


Scientist::Scientist(Board board, enum City, int){
    
}

Player& Scientist::discover_cure(enum Color){
    return *this;
}

string Scientist::role(){
    return "Scientist";
    }