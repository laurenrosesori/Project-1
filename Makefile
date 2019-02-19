
output.out: Queue221.o Driver.o Node221.o List221.o Stack221.o  
	g++ -Wall -std=c++11 Driver.o Node221.o List221.o Stack221.o Queue221.o -o output.out

Driver.o: Driver.cpp List221.h Stack221.h Queue221.h 
	g++ -Wall -std=c++11 -c Driver.cpp 

Node221.o: Node221.cpp Node221.h
	g++ -Wall -std=c++11 -c Node221.cpp

List221.o: List221.cpp List221.h
	g++ -Wall -std=c++11 -c  List221.cpp

Stack221.o: Stack221.cpp Stack221.h
	g++ -Wall -std=c++11 -c Stack221.cpp

Queue221.o: Queue221.cpp Queue221.h
	g++ -Wall -std=c++11 -c Queue221.cpp

clean:
	rm -rf *.o
	rm -f *.out

run:
	./output.out