#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "FieldDoctor.hpp"

using namespace pandemic;

FieldDoctor::FieldDoctor(Board board, enum City){

}

Player& FieldDoctor::treat(enum City){
    return *this;
}

string FieldDoctor::role(){
    return "FieldDoctor";
}