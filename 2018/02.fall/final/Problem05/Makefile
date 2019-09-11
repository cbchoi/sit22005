all: Problem05
	g++ -L. Problem05.o calculator.o plus.o minus.o multiply.o operator.o linearFunc.o -o Problem05

Problem05: problem05.cpp
	g++ -std=c++11 -c problem05.cpp -o Problem05.o
	g++ -std=c++11 -c calculator.cpp -o calculator.o
	g++ -std=c++11 -c plus.cpp -o plus.o
	g++ -std=c++11 -c minus.cpp -o minus.o
	g++ -std=c++11 -c multiply.cpp -o multiply.o
	g++ -std=c++11 -c operator.cpp -o operator.o
	g++ -std=c++11 -c linearFunc.cpp -o linearFunc.o

clean:
	rm *.o -f
	rm Problem05 -f