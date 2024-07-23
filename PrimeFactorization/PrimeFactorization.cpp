#include <iostream>
#include <vector>


void FnpPrimeFactors(int input)
{
	int num = input;


	for (int i = 2; i * i <= num; ++i)
	{
		while (num % i == 0)
		{
			std::cout << i << " ";
			num = num / i;
		}
	}

	if (num > 1)
	{
		std::cout << num;
	}

}


int main()
{
	int input;
	std::cout << "Enter a number to find the prime factors:" << "\n";

	std::cin >> input;

	FnpPrimeFactors(input);

	return 1;

}
