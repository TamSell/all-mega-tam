#include <iostream>

int main()
{
    double input;
    int fibCounter = 1;
    int prevFib = 0;

    std::cout << "Enter a number and I will output the fibonacci sequence to that number or the next number in the sequence before!! \n";

    std::cin >> input;

    std::cout << 0 << " ";
    while (fibCounter < input)
    {
        int tempFib = prevFib + fibCounter;
        std::cout << tempFib << " ";
        tempFib = fibCounter;
        fibCounter += prevFib;
        prevFib = tempFib;
    }

    std::cout << "\n" << "Yay fib numbers!!";
}