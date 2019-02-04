CFLAGS = -Wall -std=c++11

output: hw01.o cs3560_hw01_main.o
	g++ $(CFLAGS) hw01.o cs3560_hw01_main.o -o output  

hw01.o: hw01.cc hw01.h
	g++ -c $(CFLAGS) hw01.cc

cs3560_hw01_main.o: cs3560_hw01_main.cc hw01.h
	g++ -c $(CFLAGS) cs3560_hw01_main.cc

clean:
	rm *.o $(objects) cs3560_hw01_main




