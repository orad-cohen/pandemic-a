#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include <unordered_map>
#include "City.hpp"
#include "Color.hpp"

using namespace std;
using namespace pandemic;

namespace pandemic{
class Board {    
    public:
    unsigned int temp;
    Board();
    unsigned int& operator[](enum City);    
    friend ostream& operator<<(ostream& os , Board board);
    bool is_clean();
    void remove_cures();
    
    friend class Player;


    
};

}





