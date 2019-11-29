
#include "Player.h"
#include "State.h"

Player::Player()
{
    SetcurrentTrack(0);
    // Init OFF
    Setplaying(false);
    tracksList = new std::vector<std::string>();
    // Init des tracks
    for(int i=1; i < 13; i++){
        tracksList->push_back("Track" + std::to_string(i));
    }
    Setstate(new StoppedState(this));

    //ctor
}

Player::~Player()
{
    delete tracksList;
    //dtor
}

std::string Player::startPlayback(){
    return "Playing " + tracksList->at(currentTrack);
}

std::string Player::stopPlayback(){
    currentTrack =0;
    return "Stopped ";
}

std::string Player::pausePlayback(){
    return "Paused "+ tracksList->at(currentTrack);
}

std::string Player::previoustrack(){
    currentTrack--;
    // SI la taille est atteinte, on revient à 0
    currentTrack %= tracksList->size();
    return "playing" + tracksList->at(currentTrack);
}

std::string Player::nexttrack(){
    currentTrack++;
    // SI la taille est atteinte, on revient à 0
    currentTrack %= tracksList->size();
    return "playing" + tracksList->at(currentTrack);
}
