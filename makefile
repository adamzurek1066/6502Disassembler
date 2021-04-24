CC = g++
CFLAGS = -Wall -g
OBJECTS = disassembler.o

main: $(OBJECTS)
	$(CC) $(CFLAGS) -o disassembler $(OBJECTS)

disassembler.o: disassembler.h

clean:
	rm *.o disassembler