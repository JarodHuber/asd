#pragma once
#include "gamestate.h"
class startupstate :
    public gamestate
{
    virtual Color background() const override;

    virtual bool nextState(int &nextState) override;
};

