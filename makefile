CC = g++
CFLAGS = -g -Wall
OBJECTS = disassembler.o instructions.o

main: $(OBJECTS)
	$(CC) $(CFLAGS) -o disassembler $(OBJECTS)


instructions.o: instructions.h

disassembler.o: disassembler.h instructions.h
	$(CC) $(CFLAGS) -c disassembler.cpp


clean:
	rm *.o disassembler