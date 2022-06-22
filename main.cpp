#ifndef _IOSTREAM_
#include <iostream>
#endif // !_IOSTREAM_

#ifndef _SDL2_
#include <SDL2/SDL.h>
#endif // !_SDL2_

#include <./include/ShapesDrawing.h>

const int WIDTH = 800,HEIGHT = 600;

ShapesDrawing* shapesDrawing = 0;

int main(int argc,char *argv[])
{
    shapesDrawing = new ShapesDrawing();

    shapesDrawing->init("SDL Drawing Shapes",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WIDTH,HEIGHT);

    while (shapesDrawing->running())
    {
        shapesDrawing->handleEvents();
        shapesDrawing->update();
        shapesDrawing->render();
    };
    
    shapesDrawing->clean();

    return EXIT_SUCCESS;
}