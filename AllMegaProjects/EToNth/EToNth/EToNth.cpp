#include <numbers>
#include <iostream>
#include <iomanip>



int main()
{

    float number = 0.f;
    int n;
    std::cout << "Enter a number to find nth digits of:  \n";

    std::cin >> number;

    std::cout << "Enter digits for pi (max: 100): \n";

    std::cin >> n;


    //This some bullshit to figure out but the setprecision and fixed need to be in a cout line
    std::cout << std::setprecision(n) << std::fixed;

    std::cout << number;

}

