#include <iostream>
#include <string>


int printNextPrime(int pastPrime)
{
	bool check = false;
	int i;

	if (pastPrime == 2 || pastPrime == 3)
	{
		std::cout << "Next Prime: " << pastPrime++ << std::endl;
		return pastPrime;
	}


	for (i = pastPrime + 1; i < pastPrime + 10; ++i)
	{
		for (int j = 3; j < i; ++j)
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
	int primeHolder;

	std::cout << "Please press enter to find the next prime number, to stop enter exit: \n";

	std::getline(std::cin, input);

	primeHolder = 2;
	while (input != "exit")
	{
		primeHolder = printNextPrime(primeHolder);
		std::getline(std::cin, input);
	}




}