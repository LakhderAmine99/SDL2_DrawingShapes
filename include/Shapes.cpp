#include "Shapes.h"

Shapes::Shapes(SDL_Window *window,SDL_Renderer *renderer)
{
    this->m_sWindow = window;
    this->m_sRenderer = renderer;
}

Shapes::~Shapes()
{
    std::cout <<"Cleaning shapes memory...\n";

    delete &(this->m_sWindow);
    delete &(this->m_sRenderer);

    SDL_free(this->m_sWindow);
    SDL_free(this->m_sRenderer);

    SDL_DestroyWindow(this->m_sWindow);
    SDL_DestroyRenderer(this->m_sRenderer);

    this->m_sWindow = NULL;
    this->m_sRenderer = NULL;
}

bool Shapes::drawRect(int x,int y,int width,int height)
{
    SDL_SetRenderDrawColor(this->m_sRenderer,255,0,0,255);
    
    SDL_RenderDrawLine(this->m_sRenderer,x,y,x+width,y);
    SDL_RenderDrawLine(this->m_sRenderer,x,y,x,y+height);
    SDL_RenderDrawLine(this->m_sRenderer,x+width,y,x+width,y+height);
    SDL_RenderDrawLine(this->m_sRenderer,x,y+height,x+width,y+height);
    
    SDL_SetRenderDrawColor(this->m_sRenderer,0,0,0,255);

    return true;
}

bool Shapes::drawCercle(double centerX,double centerY,float radius)
{
    return true;
}

bool Shapes::drawTriangle(double AX_vertex,double AY_vertex,double BX_vertex,double BY_vertex,double CX_vertex,double CY_vertex)
{
    

    return true;
}