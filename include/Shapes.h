#ifndef __Shapes__
#define __Shapes__

#include <iostream>
#include <cmath>
#include <SDL2/SDL.h>

class Shapes
{
    private:

    SDL_Window *m_sWindow;
    SDL_Renderer *m_sRenderer;

    public:

    Shapes(SDL_Window *window,SDL_Renderer *renderer);
    ~Shapes();

    bool drawCercle(double centerX,double centerY,float radius);
    bool drawRect(int x,int y,int width,int height);
    bool drawTriangle(double AX_vertex,double AY_vertex,double BX_vertex,double BY_vertex,double CX_vertex,double CY_vertex);

    bool drawParabola(double centerX,double centerY,double subdivision=0.1,double numberOfpints=50,double latusRectum=16);
};

#endif //__Shapes__