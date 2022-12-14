CC=g++
BIN=app

all: $(BIN)

$(BIN): main.o team.o game.o
	$(CC) main.o team.o game.o -o $(BIN)

main.o: main.cpp
	$(CC) -c main.cpp

team.o: team.cpp team.hpp
	$(CC) -c team.cpp

game.o: game.cpp game.hpp
	$(CC) -c game.cpp

clean:
	rm -f *.o $(BIN)
