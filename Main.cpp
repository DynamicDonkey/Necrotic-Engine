#include "Engine.h"

//https://www.youtube.com/watch?v=pn9oL7mqj1g&list=PL-K0viiuJ2RctP5nlJlqmHGeh66-GOZR_&index=5

int main(int argc, char* args [])
{

    Engine::GetInstance()->Init();

    while(Engine::GetInstance()->IsRunning())
    {
        Engine::GetInstance()->Events();
        Engine::GetInstance()->Update();
        Engine::GetInstance()->Render();
    }

    Engine::GetInstance()->Clean();
    Engine::GetInstance()->Quit();

    return 0;
}
