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
    SDL_RenderPresent(this->m_dRenderer);

    return;
};

void ShapesDrawing::clean()
{
    std::cout <<"Cleaning up everything\n";
    SDL_DestroyWindow(this->m_dWindow);
    SDL_DestroyRenderer(this->m_dRenderer);
    SDL_Quit();

    return;
};
