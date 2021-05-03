#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "GeneSplicer.hpp"





GeneSplicer::GeneSplicer(Board board, enum City){

}

Player& GeneSplicer::discover_cure(){
    return *this;
}

string GeneSplicer::role(){
    return "GeneSplicer";
}

