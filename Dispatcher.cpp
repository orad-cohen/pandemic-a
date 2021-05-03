#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Dispatcher.hpp"
using namespace pandemic;


Dispatcher::Dispatcher(Board board, enum City){

    }

Player& Dispatcher::fly_direct(enum City){
        return *this;
    }

string Dispatcher::role(){
        return "Dispatcher";
    }
