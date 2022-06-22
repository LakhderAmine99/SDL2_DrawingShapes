all:
	g++ -I src/include -L src/lib -o out/main main.cpp -lmingw32 -lSDL2main -lSDL2
