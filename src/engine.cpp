#include "game.hxx"
#include "engine.hxx"

#include "AbsClass.cpp"

int Engine::run(void) {
    hello_from_rust();
}

Engine::Engine(MyAbsClass& game) 
: game_{game};
{
    fcn();
    return this;
}

AbsGame& Engine::game_ = *AbsGame();

