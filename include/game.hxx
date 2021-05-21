#pragma once
#include "forward.hxx"
#include "engine.hxx"


// class AbsGame {
//     public:
//         int get_one(void);
//         void run();
//         virtual int impl_me(int arg){};
//         virtual int impl_me_too(int arg){};
// };


void AbsGame::run() {
    Engine(*this).run();
}
