#include "./include/ShapesDrawing.h"

const int WIDTH = 800,HEIGHT = 600;

ShapesDrawing* shapesDrawing = 0;

int main(int argc,char *argv[])
{
    shapesDrawing = new ShapesDrawing();

    shapesDrawing->init("SDL Drawing Shapes",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WIDTH,HEIGHT,0);

    while (shapesDrawing->running())
    {
        shapesDrawing->handleEvents();
        shapesDrawing->update();
        shapesDrawing->render();
    };
    
    shapesDrawing->clean();

    delete shapesDrawing;

    return EXIT_SUCCESS;
}