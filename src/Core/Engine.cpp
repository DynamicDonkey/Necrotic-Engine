#include <iostream>

#include "Engine.h"
#include "TextureManager.h"


Engine* Engine::s_Instance = nullptr;

bool Engine::Init()
{
    if(SDL_Init(SDL_INIT_VIDEO) > 0)
    {
        SDL_Log("Failed to initialize SDL: %s\n", SDL_GetError());
        return false;
    }

    if(!(IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG)))
    {
        SDL_Log("Failed to initialize SDL: %s\n", SDL_GetError());
        return false;
    }

    m_Window = SDL_CreateWindow("Necrotic Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    if(m_Window == nullptr)
    {
        SDL_Log("Failed to create window: %s\n", SDL_GetError());
        return false;
    }

    m_Renderer = SDL_CreateRenderer(m_Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(m_Renderer == nullptr)
    {
        SDL_Log("Failed to create renderer: %s\n", SDL_GetError());
    }

    TextureManager::GetInstance()->Load("grass", "assets/gfx/ground_grass_1.png");
    return m_IsRunning = true;
}

bool Engine::Clean()
{
    TextureManager::GetInstance()->Clean();

    SDL_DestroyRenderer(m_Renderer);
    SDL_DestroyWindow(m_Window);

    IMG_Quit();
    SDL_Quit();

    return true;
}

void Engine::Update()
{
    //SDL_Log("Engine::Update();"); //!<This is just to display that the engine is doing something, purely for debug
}

void Engine::Render()
{
    SDL_SetRenderDrawColor(m_Renderer, 0, 0, 0, 255);
    SDL_RenderClear(m_Renderer);

    TextureManager::GetInstance()->Draw("grass", 100, 100, 64, 64);
    SDL_RenderPresent(m_Renderer);
}

void Engine::Events()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type)
    {
    case SDL_QUIT:
        Quit();
        break;
    }
}

void Engine::Quit()
{
    m_IsRunning = false;
}
