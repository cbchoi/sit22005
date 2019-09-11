all: Problem03

Problem03: problem03.o 
	g++ -L. problem03.o -o Problem03

.cpp.o:
	g++ -std=c++11 -c $< -o $@

clean:
	rm *.o -f
	rm Problem03 -f

reset:
	rm *.o -f
	rm Problem03 -f
	rm *_sol*