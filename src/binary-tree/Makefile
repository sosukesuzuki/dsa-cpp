gcc_options = -std=c++17 -Wall --pedantic-errors

.POHONY: run

run: main
	./main

main: main.o binary-tree.o
	g++ $(gcc_options) -o $@ $^

main.o: main.cpp
	g++ $(gcc_options) -c $^

binary-tree.o: binary-tree.cpp
	g++ $(gcc_options) -c $^
