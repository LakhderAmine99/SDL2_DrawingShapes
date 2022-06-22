#ifndef __ShapesDrawing__
#define __ShapesDrawing__

#include "Shapes.h"

class ShapesDrawing
{
    private:

    SDL_Window *m_dWindow;
    SDL_Renderer *m_dRenderer;
    Shapes *m_dShapes;
    
    bool m_dRunning;

    public:

    ShapesDrawing();
    ~ShapesDrawing();

    bool init(const char* title,int x,int y,int width,int height,int flags);
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running();
};

ShapesDrawing::ShapesDrawing()
{

};

ShapesDrawing::~ShapesDrawing()
{

};

bool ShapesDrawing::init(const char* title,int x,int y,int width,int height,int flags)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        this->m_dWindow = SDL_CreateWindow(title,x,y,width,height,flags);

        if(this->m_dWindow != NULL)
        {
            this->m_dRenderer = SDL_CreateRenderer(this->m_dWindow,-1,0);
        }
    }
    else
    {
        return false;
    }

    this->m_dRunning = true;

    return true;
};

bool ShapesDrawing::running()
{
    return this->m_dRunning;
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