#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Researcher.hpp"

using namespace pandemic;

Researcher::Researcher(Board board, enum City){

}

Player& Researcher::discover_cure(){
 return *this;
}
        
string Researcher::role(){
    return "Researcher";
}