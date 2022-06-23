all:
	g++ -I src/include -L src/lib -o out/main ./include/Shapes.cpp ./include/ShapesDrawing.cpp main.cpp -lmingw32 -lSDL2main -lSDL2

clean:
	rm -f out/main

