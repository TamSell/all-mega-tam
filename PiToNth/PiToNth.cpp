#include <numbers>
#include <iostream>
#include <iomanip>



int main()
{
    double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    double otherPi = 4 * atan(1.0);
    int n;
    std::cout << "Enter digits for pi (max: 100): \n";
    
    std::cin >> n;
 


    std::fixed;


    //Precision has to be in the cout line otherwise it will be ignored and not work!!!!!!!!!!
    std::cout << std::setprecision(n) << pi << "\n";

    std::cout << std::setprecision(n) << otherPi;
}

