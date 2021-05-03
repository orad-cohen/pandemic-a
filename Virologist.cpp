#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Virologist.hpp"

using namespace pandemic;


Virologist::Virologist(Board board, enum City){
    
}

Player& Virologist::treat(enum City){
    return *this;
}
        
string Virologist::role(){
    return "Virologist";
}