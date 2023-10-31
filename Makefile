petris : main.o game.o highscore.o
	gcc -o petris main.o game.o highscore.o -lncurses

main.o : main.c game.h petris.h
	gcc -Wall -c main.c

game.o : game.c game.h petris.h config.h
	gcc -Wall -c game.c

highscore.o : highscore.c highscore.h config.h
	gcc -Wall -c highscore.c

clean:
	rm main.o game.o highscore.o

install: petris
	cp petris /opt
