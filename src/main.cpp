#include "game.hxx"
#include "engine.hxx"

struct MyClass : AbsGame 
{
    public:
        MyClass();
        int run();
        int impl_me(int arg) ;
        int impl_me_too(int arg) ;
    
};

int MyClass::impl_me(int arg)
{
    return arg*2;
}

int MyClass::impl_me_too(int arg)
{
    return arg*5;
}

int MyClass::run()
{
    AbsGame::run();
}

MyClass::MyClass()
{
}

int main() {
    MyClass().run();
}