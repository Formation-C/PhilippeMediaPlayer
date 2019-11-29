#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <iostream>

class State;

class Player
{
    public:
        Player();
        virtual ~Player();

        std::vector< std::string >* GettracksList() { return tracksList; }
        void SettracksList(std::vector< std::string >* val) { tracksList = val; }
        int GetcurrentTrack() { return currentTrack; }
        void SetcurrentTrack(int val) { currentTrack = val; }
        State* Getstate() { return state; }
        void Setstate(State* val) { state = val; }
        bool Getplaying() { return playing; }
        void Setplaying(bool val) { playing = val; }
        std::string nexttrack();
        std::string previoustrack();
        std::string startPlayback();
        std::string stopPlayback();
        std::string pausePlayback();

    protected:

    private:
        std::vector< std::string >* tracksList;
        int currentTrack;
        State* state;
        bool playing;
};

#include "State.h"
#include "StoppedState.h"

#endif // PLAYER_H
