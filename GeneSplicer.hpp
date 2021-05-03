#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class GeneSplicer: public Player{
    public:

        GeneSplicer(Board board, enum City);

        Player& discover_cure();

        string role();

};