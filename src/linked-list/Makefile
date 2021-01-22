gcc_options = -std=c++17 -Wall --pedantic-errors

.POHONY: run

run: main
	./main

main: main.o linked-list.o
	g++ $(gcc_options) -o $@ $^

main.o: main.cpp
	g++ $(gcc_options) -c $^

linked-list.o: linked-list.cpp
	g++ $(gcc_options) -c $^
