#include "StoppedState.h"
#include "PlayingSate.h"

// Il faut utiliser le constructeur de State
//StoppedState::StoppedState() : State();
//{
//    //ctor
//}

StoppedState::~StoppedState()
{
    //dtor
}

void StoppedState::onPlay(){
    player->Setstate(new PlayingSate(player));
     std::cout << player->startPlayback() << std::endl;
}

void StoppedState::onStop(){

   std::cout << "error" << std::endl;
}


