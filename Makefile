#Defines the compiler
CC = g++

#Compile with all errors and warnings
CFLAGS = -g -Wall -Wextra -c

#Links the .o files together and creates an executable
TARGET = library

#Readies $(TARGET) for use in the following code
all: $(TARGET)

#Marks all the files that will be compiled
$(TARGET):	main.o library.o
		$(CC) main.o library.o -o $(TARGET)

#Compiles the main.cpp file with all of the .h files
main.o: 	main.cpp library.h
		$(CC) $(CFLAGS) main.cpp

#Compiles the stacker.cpp/.h files
stacker.o: 	library.h library.cpp
		$(CC) $(CFLAGS) library.cpp

#Cleans out any unnecaary items post compiling.
clean:
		$(RM) *.o *~ library
