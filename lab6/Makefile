QueueDemo: main.o Queue.o test.o
	g++ -g -Wall -std=c++11 main.o test.o Queue.o -o QueueDemo

main.o: main.cpp test.h
	g++ -g -std=c++11 -c main.cpp

test.o: test.h test.cpp Queue.h
	g++ -g -std=c++11 -c test.cpp

clean:
	rm main.o QueueDemo *~
