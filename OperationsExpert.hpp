#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class OperationsExpert: public Player{

    public:

        OperationsExpert(Board board, enum City);

        Player& build();

        string role();

};