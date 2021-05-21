#include "engine.hxx"
#include "game.hxx"


int fcn() 
{
    return 0;
}

int AbsGame::get_one(void) 
{
    return 1;
}

void AbsGame::run() {
    Engine(*this).run();
}
