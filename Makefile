CC=g++
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
EXEC=digger
SRC= $(wildcard GameModel.cpp main_test_Player_GameModel.cpp Player.cpp)
OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

digger: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

main_test_Player_GameModel.o: Player.h GameModel.h

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)


.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)


