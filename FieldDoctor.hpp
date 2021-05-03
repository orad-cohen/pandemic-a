#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class FieldDoctor: public Player{

    public:

        FieldDoctor(Board board, enum City);

        Player& treat(enum City);

        string role();

};