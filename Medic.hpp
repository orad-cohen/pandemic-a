#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Medic: public Player{

    public:

        Medic(Board board, enum City);

        Player& treat(enum City);

        string role();

};