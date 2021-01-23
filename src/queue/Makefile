gcc_options = -std=c++17 -Wall --pedantic-errors

.POHONY: run

run: main
	./main

main: main.o queue.o
	g++ $(gcc_options) -o $@ $^

main.o: main.cpp
	g++ $(gcc_options) -c $^

queue.o: queue.cpp
	g++ $(gcc_options) -c $^
