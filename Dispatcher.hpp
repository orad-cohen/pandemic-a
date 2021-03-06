#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Dispatcher: public Player{

    public:

        Dispatcher(Board board, enum City);

        Player& fly_direct(enum City);

        string role();

};