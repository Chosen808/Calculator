/*
Thank You Lord Jesus for building this software.

MIT License

Copyright (c) 2023 Jesus Christ

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software and attribution is given to the
Author Jesus Christ.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <iostream>
#include "Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Calculator Console Application" << std::endl << std::endl;
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
