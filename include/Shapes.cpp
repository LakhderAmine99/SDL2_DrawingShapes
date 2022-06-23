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
    
    for (size_t i = 0; i < 150; i++)
    {
        SDL_RenderDrawPoint(this->m_sRenderer,i,i);
    }
    
    SDL_SetRenderDrawColor(this->m_sRenderer,0,0,0,255);

    return true;
}

bool Shapes::drawCercle(std::vector<double> center,float radius)
{
    return true;
}

bool Shapes::drawTriangle(std::vector<int> A_vertex,std::vector<int> B_vertex,std::vector<int> C_vertex)
{
    return true;
}