#pragma once
#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
using namespace pandemic;
namespace pandemic{
    class Player {
   
    private:
    Board gameBoard;
    enum City PlayerCity;
    

    public:    
    Player& drive (enum City);    
    Player& fly_shuttle(enum City);
    Player& fly_charter(enum City);
    Player& take_card(enum City);

    virtual Player& fly_direct(enum City);
    virtual Player& build();
    virtual Player& discover_cure(enum Color);
    virtual Player& treat(enum City);
    virtual string role()=0;
    
};
}
