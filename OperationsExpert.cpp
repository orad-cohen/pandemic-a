#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "OperationsExpert.hpp"

OperationsExpert::OperationsExpert(Board board, enum City){

}

Player& OperationsExpert::build(){
    return *this;
}

string OperationsExpert::role(){
    return "OperationsExpert";
}