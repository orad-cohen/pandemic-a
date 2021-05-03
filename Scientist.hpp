#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Scientist: public Player{

    public:

        Scientist(Board board, enum City, int);

        Player& discover_cure(enum Color);

        string role();

};