all:
	g++ -I src/include -L src/lib -o main main.cpp -lmingw32 -lSDL2main -lSDL2

include:
	g++ -I ./include -o main main.cpp -lShapes -lShapeDrawing