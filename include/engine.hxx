#pragma once
#include "forward.hxx"
#include "game.hxx"
#include <iostream>

extern "C" int hello_from_rust(void);

class AbsGame {
    public:
        void run();
        virtual int impl_me(int arg) = 0;
        virtual int impl_me_too(int arg) = 0;
};
class Engine {
    public:
        Engine(AbsGame&);
        int run(void);
        AbsGame& game_;
};

Engine *main_engine;

int Engine::run(void) {
    main_engine = this;
    hello_from_rust();
    return 0;
}

Engine::Engine(AbsGame& game) 
: game_(game)
{
}



extern "C" int impled(int x) {
    int tmp = main_engine->game_.impl_me(x);
    std::cout << '\n' << tmp << ", " << x << std::endl;
    return main_engine->game_.impl_me(x);
}