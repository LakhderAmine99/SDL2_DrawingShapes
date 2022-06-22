#ifndef __ShapesDrawing__
#define __ShapesDrawing__

#include "Shapes.h"

class ShapesDrawing
{
    private:

    SDL_Window *m_dWindow;
    SDL_Renderer *m_dRenderer;
    Shapes m_dShapes;
    
    bool m_dRunning = false;

    public:

    ShapesDrawing();
    ~ShapesDrawing();

    bool init(const char* title,int x,int y,int width,int height);
    void handleEvents();
    void update();
    void render();
    void clean();
};

void ShapesDrawing::ShapesDrawing()
{

};

void ShapesDrawing::~ShapesDrawing()
{
    delete[] m_dWindow;
    delete[] m_dRenderer;
    delete[] m_dShapes;
};

bool ShapesDrawing::init(const char* title,int x,int y,int width,int height)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        this->m_dWindow = SDL_CreateWindow(title,x,y,width,height);

        if(this->m_dWindow != NULL)
        {
            this->m_dRenderer = SDL_CreateRenderer(this->m_dRenderer,-1,0);
        }
    }
    else
    {
        return false;
    }

    return true;
};

void ShapesDrawing::handleEvents()
{

};

void ShapesDrawing::update()
{

};

void ShapesDrawing::render()
{

};

void ShapesDrawing::clean()
{

};

#endif // __ShapesDrawing