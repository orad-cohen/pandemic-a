
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Researcher: public Player{

    public:

        Researcher(Board board, enum City);

        Player& discover_cure();
        
        string role();

};