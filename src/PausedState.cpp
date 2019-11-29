#include "PausedState.h"
#include "StoppedState.h"
#include "PlayingSate.h"

//PausedState::PausedState()
//{
//    //ctor
//}

PausedState::~PausedState()
{
    //dtor
}


void PausedState::onPlay(){
    player->Setstate(new PlayingSate(player));
     std::cout << player->startPlayback() << std::endl;
}

void PausedState::onStop(){
    player->Setstate(new StoppedState(player));
   std::cout << "error" << std::endl;
}
