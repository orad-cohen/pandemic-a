#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Virologist: public Player{

    public:

        Virologist(Board board, enum City);

        Player& treat(enum City);
        
        string role();

};