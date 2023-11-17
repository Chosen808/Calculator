// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Calculator COnsole Application" << std::endl << std::endl;
    std::cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << std::endl;

    Calculator c;

    while (true)
    {
        std::cin >> x >> oper >> y;

        if (oper == '/' && y == 0)
        {
            std::cout << "You attemped to divide by 0" << std::endl;

            continue;
        }

        else
        {
            result = c.Calculate(x, oper, y);

            std::cout << "Result of " << x << oper << y << " is: " << result << std::endl;
            std::cout << "Please enter another one: " << std::endl;
        }
    }

    return 0;
}