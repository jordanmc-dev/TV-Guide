CFLAGS = -Wall -pedantic -ansi

OBJ = tvGuide.o userInterface.o fileIO.o linkedList.o comparison.o

EXE = tvGuide

EXE : $(OBJ)
	gcc $(OBJ) -o $(EXE)

tvGuide.o : tvGuide.c tvGuide.h userInterface.h fileIO.h
	gcc -c tvGuide.c $(CFLAGS)

userInterface.o: userInterface.c userInterface.h 
	gcc -c userInterface.c $(CFLAGS)

fileIO.o: fileIO.c fileIO.h linkedList.h tvGuide.h comparison.h
	gcc -c fileIO.c $(CFLAGS)

linkedList.o: linkedList.c linkedList.h boolean.h
	gcc -c linkedList.c $(CFLAGS)

comparison.o: comparison.c comparison.h fileIO.h boolean.h
	gcc -c comparison.c $(CFLAGS)

clean:
	rm -f tvGuide $(OBJ)
