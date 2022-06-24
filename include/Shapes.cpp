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
    SDL_SetRenderDrawColor(this->m_sRenderer,255,128,0,255);

    double x,y;

    for(double angle = 0; angle < 360; angle += 0.1)
    {
        x = centerX + radius * cos(angle);
        y = centerY + radius * sin(angle);

        SDL_RenderDrawPoint(this->m_sRenderer,x,y);
    }

    SDL_SetRenderDrawColor(this->m_sRenderer,0,0,0,255);

    return true;
}

bool Shapes::drawTriangle(double AX_vertex,double AY_vertex,double BX_vertex,double BY_vertex,double CX_vertex,double CY_vertex)
{
    SDL_SetRenderDrawColor(this->m_sRenderer,0,255,0,255);
    
    SDL_RenderDrawLine(this->m_sRenderer,AX_vertex,AY_vertex,CX_vertex,CY_vertex);
    SDL_RenderDrawLine(this->m_sRenderer,CX_vertex,CY_vertex,BX_vertex,BY_vertex);
    SDL_RenderDrawLine(this->m_sRenderer,BX_vertex,BY_vertex,AX_vertex,AY_vertex);
    
    SDL_SetRenderDrawColor(this->m_sRenderer,0,0,0,255);

    return true;
}