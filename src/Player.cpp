
#include "Player.h"

Player::Player()
{
    // Init OFF
    Setplaying(false);
    tracksList = new std::vector<std::string>();
    // Init des tracks
    for(int i=1; i < 13; i++){
        tracksList->push_back("Track" + std::to_string(i));
    }

    //ctor
}

Player::~Player()
{
    delete tracksList;
    //dtor
}
