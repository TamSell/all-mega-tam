#include <iostream>
#include <string>


int printNextPrime(int pastPrime)
{
	bool check = false;
	int i;

	for (i = pastPrime + 1; i < pastPrime + 10; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				check = true;
			}
		}

		if (check == false)
		{
			std::cout << "Next Prime: " << i << '\n';
			return i;
		}

		check = false;
	}
}



int main()
{
	std::string input;
	int primeHolder = 1;

	std::cout << "Please press enter to find the next prime number, to stop enter exit: \n";

	std::getline(std::cin, input);

	while (input != "exit")
	{
		primeHolder = printNextPrime(primeHolder);
		std::getline(std::cin, input);
	}

}