all: output

output: main.o ForwardLinkedList.o
	g++ -std=c++20 main.o ForwardLinkedList.o -o output
	rm *.o

main.o: main.cpp
	g++ -std=c++20 -c main.cpp

ForwardLinkedList.o: ForwardLinkedList.cpp
	g++ -std=c++20 -c ForwardLinkedList.cpp

clean:
	rm *.o output
