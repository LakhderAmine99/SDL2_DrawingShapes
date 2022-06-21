#ifndef __ShapesDrawing__
#define __ShapesDrawing__

#include "Shapes.h"

class ShapesDrawing
{
    private:

    SDL_Window *s_dWindow;
    SDL_Renderer *s_dRenderer;
    
    bool s_dRunning = false;

    public:

    ShapesDrawing();
    ~ShapesDrawing();

    bool init();
    bool handleEvents();
    void update();
    void render();
    void clean();
}

#endif // __ShapesDrawing