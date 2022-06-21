#ifndef _IOSTREAM_
#include <iostream>
#endif // !_IOSTREAM_

#ifndef _SDL2_
#include <SDL2/SDL.h>
#endif // !_SDL2_

#include "./include/SDL2drawing.h"

const int WIDTH = 800,HEIGHT = 600;

bool ds_isRunning = false;
SDL_Window *ds_window;
SDL_Renderer *ds_renderer;

bool init();
void render();
void update();
void handleEvents();
void clean();

bool init(const char* title,int windowXPos,int windowYPos,int width,int height,int flags)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        ds_window = SDL_CreateWindow(title,windowXPos,windowYPos,width,height,flags);

        if(ds_window != NULL)
        {
            ds_renderer = SDL_CreateRenderer(ds_window,-1,0);
        }
    }
    else
    {
        return false;
    }

    return true;
}

void render()
{
    SDL_SetRenderDrawColor(ds_renderer,0,0,0,255);
    SDL_RenderClear(ds_renderer);
    SDL_RenderPresent(ds_renderer);
}

int main(int argc,char *argv[])
{
    if(init("Hello SDL2 World",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WIDTH,HEIGHT,SDL_WINDOW_SHOWN))
    {
        ds_isRunning = true;
    }
    else
    {
        return 1;
    }

    while(ds_isRunning)
    {
        handleEvents();
        update();
        render();
    }

    clean();
    
    SDL_DestroyWindow(ds_window);
    SDL_Quit();

    return EXIT_SUCCESS;
}