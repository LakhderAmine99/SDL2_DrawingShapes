#include "ShapesDrawing.h"

/**
 * @brief 
 * 
 * @param title char*
 * @param x int
 * @param y int
 * @param width int
 * @param height int
 * @param flags int
 * @return true if the initialization is sucessed else returns false.
 * 
 */
bool ShapesDrawing::init(const char* title,int x,int y,int width,int height,bool fullScreen)
{
    int flags = !fullScreen ? 0 : SDL_WINDOW_FULLSCREEN;

    if(SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        this->m_dWindow = SDL_CreateWindow(title,x,y,width,height,flags);

        if(this->m_dWindow != NULL)
        {
            std::cout <<"Window creation success\n";
            this->m_dRenderer = SDL_CreateRenderer(this->m_dWindow,-1,0);

            if(this->m_dRenderer != NULL)
            {
                std::cout <<"Renderer creation success\n";
                SDL_SetRenderDrawColor(this->m_dRenderer,0,0,0,255);
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }

    this->m_dRunning = true;

    this->m_dShapes = new Shapes(this->m_dWindow,this->m_dRenderer);

    return true;
};

bool ShapesDrawing::running()
{
    return this->m_dRunning;
};

void ShapesDrawing::handleEvents()
{
    SDL_Event event;

    if(SDL_PollEvent(&event) != 0)
    {
        switch (event.type)
        {
        case SDL_QUIT:
            this->m_dRunning = false;
        break;
        
        default:
            break;
        }
    }

    return;
};

void ShapesDrawing::update()
{
    return;
};

void ShapesDrawing::render()
{
    SDL_RenderClear(this->m_dRenderer);

    this->m_dShapes->drawRect(50,50,250,100);

    this->m_dShapes->drawTriangle(150,180,300,400,0,400);

    this->m_dShapes->drawCercle(450,200,100);
    
    SDL_RenderPresent(this->m_dRenderer);

    return;
};

void ShapesDrawing::clean()
{
    std::cout <<"Cleaning up everything\n";

    delete &this->m_dWindow;
    delete &this->m_dRenderer;
    delete []this->m_dShapes;

    SDL_free(this->m_dWindow);
    SDL_free(this->m_dRenderer);
    SDL_free(this->m_dShapes);
    
    SDL_DestroyWindow(this->m_dWindow);
    SDL_DestroyRenderer(this->m_dRenderer);
    
    this->m_dWindow = NULL;
    this->m_dRenderer = NULL;
    this->m_dShapes = NULL;

    delete this;
    
    SDL_Quit();

    return;
};
