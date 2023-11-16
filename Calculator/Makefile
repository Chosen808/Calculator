output: Calculator.o CalculatorH.o
	g++ Calculator.o CalculatorH.o -o output

Calculator.o: Calculator.cpp
	g++ -c Calculator.cpp

CalculatorH.o: CalculatorH.cpp Calculator.h
	g++ -c CalculatorH.cpp

clean:
	rm -r *.o output