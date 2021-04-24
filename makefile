CC = g++
CFLAGS = -Wall -g
OBJECTS = disassembler.o instructions.o

main: $(OBJECTS)
	$(CC) $(CFLAGS) -o disassembler $(OBJECTS)


instructions.o: instructions.h

disassembler.o: disassembler.h instructions.h


clean:
	rm *.o disassembler