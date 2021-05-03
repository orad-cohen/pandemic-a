#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
#include "Player.hpp"
using namespace pandemic;


Player& Player::drive (enum City city){
    return *this;
}
Player& Player::fly_direct(enum City city){

    return *this;
}
Player& Player::fly_shuttle(enum City city){
    return *this;
}
Player& Player::fly_charter(enum City city){
    return *this;
}
Player& Player::build(){
    return *this;
}
Player& Player::discover_cure(enum Color color){
    return *this;
}
Player& Player::treat(enum City city){
    return *this;
}
Player& Player::take_card(enum City city){
    return *this;
}
