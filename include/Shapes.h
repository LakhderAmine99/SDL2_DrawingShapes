#ifndef __Shapes__
#define __Shapes__

#include <iostream>
#include <vector>
#include <SDL2/SDL.h>

class Shapes
{
    private:

    SDL_Window *s_sWindow;
    SDL_Renderer *s_sRenderer;

    public:

    Shapes(SDL_Window &window,SDL_Renderer &renderer);

    bool drawCercle(std::vector center,float radius);
    bool drawRect(int x,int y,int width,int height);
    bool drawTriangle();

};

#endif /* defined(__Game__) */