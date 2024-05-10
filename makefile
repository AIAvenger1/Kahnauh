all: output

output: main.o ForwardLinkedList.o
	g++ -std=c++17 main.o ForwardLinkedList.o -o output
	rm *.o

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

ForwardLinkedList.o: ForwardLinkedList.cpp
	g++ -std=c++17 -c ForwardLinkedList.cpp

clean:
	rm *.o output
