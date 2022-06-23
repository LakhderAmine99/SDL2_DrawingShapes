#ifndef __ShapesDrawing__
#define __ShapesDrawing__

#include "Shapes.h"

class ShapesDrawing
{
    private:

    SDL_Window *m_dWindow;
    SDL_Renderer *m_dRenderer;
    SDL_Texture *m_dTexture;

    Shapes *m_dShapes;
    
    bool m_dRunning;

    public:

    ShapesDrawing(){};
    ~ShapesDrawing(){};

    bool init(const char* title,int x,int y,int width,int height,bool fullScreen);
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running();
};

#endif // __ShapesDrawing__