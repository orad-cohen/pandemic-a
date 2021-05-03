#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"

using namespace std;

using namespace pandemic;


Board::Board(){

}

unsigned int& Board::operator[](enum City c){
    return temp; 
}
bool Board::is_clean(){
    return false;
}
void Board::remove_cures(){

}

ostream& pandemic::operator<<(ostream& os , Board b){
    return os;
}