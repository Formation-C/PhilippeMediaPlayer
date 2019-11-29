#include "PlayingSate.h"
#include "StoppedState.h"

//PlayingSate::PlayingSate()
//{
//    //ctor
//}

PlayingSate::~PlayingSate()
{
    //dtor
}

void PlayingSate::onPlay(){
    std::cout << player->pausePlayback() << std::endl;
}

void PlayingSate::onStop(){
    player->Setstate(new StoppedState(player));
    std::cout << player->stopPlayback()  << std::endl;
    delete this;
}
