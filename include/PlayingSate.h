#ifndef PLAYINGSATE_H
#define PLAYINGSATE_H

#include <State.h>


class PlayingSate : public State
{
    public:
        using State::State;
        //PlayingSate();
        virtual ~PlayingSate();

       void onPlay();
        void onStop();

    protected:

    private:
};

#endif // PLAYINGSATE_H
