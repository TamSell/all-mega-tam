#include <iostream>
#include <string>


std::string takeInput(std::string message);
int myExpon(int base, int exp);

void calcPrintBintoDec();
void calcPrintDectoBin();

int main()
{
	std::string userIn;
	while (1) {
		userIn = takeInput("Enter dec to translate from binary to decimal, enter bin to translate from decimal to binary");
		if (userIn == "exit")
		{
			break;
		}
		else if (userIn == "bin") {
			calcPrintBintoDec();
		}
		else if (userIn == "dec")
		{
			calcPrintDectoBin();
		}
	}
}

void calcPrintDectoBin()
{
	int input = stoi(takeInput("Enter a decimal number to be changed into binary system"));
	int inOut = input;
	int iter = 0;
	int binOut[16] = {};

	for (int i = 0; input > 0; i++)
	{
		binOut[i] = input % 2;
		input /= 2;
	}

	std::cout << "Dec In: " << inOut << '\n';
	std::cout << "Bin out: ";

	for (int i = (sizeof(binOut) / sizeof(binOut[0])) - 1; i >= 0; i--)
	{
		if ((i + 1) % 4 == 0)
		{
			std::cout << ' ';
		}
		std::cout << binOut[i];
	}

	std::cout << '\n' << '\n';
}

void calcPrintBintoDec()
{
	int input = stoi(takeInput("Enter a binary number to be changed into decimal system"));
	int inOut = input;
	int one = 1;
	int iter = 0;
	int decOut = 0;
	while (input > 0)
	{
		if (input & one)
		{
			input = input / 10;
			decOut += myExpon(2, iter);
		}
		else {
			input = input / 10;
		}
		++iter;

	}

	std::cout << "Bin In: " << inOut << '\n';
	std::cout << "Dec out: " << decOut << '\n' << '\n';
}


int myExpon(int base, int exp)
{
	int output = 0;
	int holder = 1;
	if (exp == 0)
	{
		return 1;
	}
	for (int i = 0; i < exp; ++i)
	{
		holder *= base;
	}
	return output + holder;
}

std::string takeInput(std::string message)
{
	std::string input;

	std::cout << message << ": " << '\n' << '\n';

	while (!std::getline(std::cin, input))
	{
		std::cout << "\nNot a valid input please try again: \n";
	}

	std::cout << '\n';

	return input;
}
