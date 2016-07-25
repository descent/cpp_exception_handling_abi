all: app
CXXFLAGS=-O0 -ggdb -m32

throw.o: throw.cpp throw.h
		g++ -c -o throw.o $(CXXFLAGS) throw.cpp

mycppabi.o: mycppabi.cpp
		g++ -c -o mycppabi.o $(CXXFLAGS) mycppabi.cpp

main.o: main.c
		gcc -c -o main.o $(CXXFLAGS) main.c

app: main.o throw.o mycppabi.o
		gcc main.o throw.o mycppabi.o $(CXXFLAGS) -o app

throw.gas: throw.cpp
		g++ -c throw.cpp -g -Wa,-adhls > throw.gas

throw.s: throw.cpp
		g++ -S throw.cpp

.PHONY: clean run
clean:
	rm -f main.o throw.o mycppabi.o app

run: app
		./app

