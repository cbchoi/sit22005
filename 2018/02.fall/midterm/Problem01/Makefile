SRC =  problem01.cpp 

all: Problem01

Problem01: problem01.o 
	g++ -L. problem01.o -o Problem01

.cpp.o:
	g++ -std=c++11 -c $< -o $@

clean:
	rm *.o -f
	rm Problem01 -f

reset:
	rm *.o -f
	rm Problem01 -f
	rm *_sol*