# cpp-template/Makefile
# All source files should have compilation rules.
# All intermediary builds should be directed to the build directory.
# The final resulting executable should reside in the root directory.

all: main

# Produce the final executable
# Include all required object files
main: build/main.o build/IntegerPair.o
	 g++ -o main build/main.o build/IntegerPair.o

# Build an object file for main
build/main.o: src/main.cpp
	 gcc -o build/main.o -c src/main.cpp

# Add object file compilation rules here
build/IntegerPair.o: src/IntegerPair.cpp
	gcc -o build/IntegerPair.o -c src/IntegerPair.cpp

# add all build files including ./main to the clean command
clean:
	 rm main build/main.o build/IntegerPair.o
