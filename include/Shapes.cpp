#include "Shapes.h"

Shapes::Shapes(SDL_Window *window,SDL_Renderer *renderer)
{
    this->m_sWindow = window;
    this->m_sRenderer = renderer;
}

bool Shapes::drawRect(int x,int y,int width,int height)
{
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