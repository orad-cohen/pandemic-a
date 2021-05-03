#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Medic.hpp"

Medic::Medic(Board board, enum City){

}

Player& Medic::treat(enum City){
 return *this;
}

string Medic::role(){
    return "Medic";
}