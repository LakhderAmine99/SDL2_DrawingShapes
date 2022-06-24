all:
	g++ -I src/include -L src/lib -o build/main ./include/Shapes.cpp ./include/ShapesDrawing.cpp main.cpp -lmingw32 -lSDL2main -lSDL2

clean:
	rm -f build/main

