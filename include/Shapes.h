#ifndef __Shapes__
#define __Shapes__

#include <iostream>
#include <vector>
#include <SDL2/SDL.h>

class Shapes
{
    private:

    SDL_Window *m_sWindow;
    SDL_Renderer *m_sRenderer;

    public:

    Shapes(SDL_Window *window,SDL_Renderer *renderer);

    bool drawCercle(std::vector<double> center,float radius);
    bool drawRect(int x,int y,int width,int height);
    bool drawTriangle(std::vector<int> A_vertex,std::vector<int> B_vertex,std::vector<int> C_vertex);

};

#endif //__Shapes__