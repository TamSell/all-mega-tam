#include <iostream>
#include <istream>
#include <string>


std::string takeInput(std::string message)
{
	std::string input;

	std::cout << message << ": ";

	while (!std::getline(std::cin, input))
	{
		std::cout << "\nNot a valid input please try again: \n";
	}

	std::cout << '\n';

	return input;
}

void printCalMonthlyMort(float roI, float princAmount, int term)
{
	float interestPart = 0.f;

	for (int i = 0; i < term; ++i)
	{
		interestPart += (1 + roI);
	}

	float tempInst = interestPart;
	interestPart *= roI;

	interestPart /= (tempInst - 1);

	std::cout << "Total mortgage payment due per month: " << princAmount * interestPart << '\n';

	return;
}



int main()
{
	float roI = 0.f;
	float princAmount = 0.f;
	int term = 0;
	std::string input;
	std::cout << "\t" << "Welcome to Mortgage Calculator Please follow on streen instructions \n \n";



	while (1)
	{
		input = takeInput("Please enter the rate of interest of your mortgage then press enter");
		if (input == "exit" || input == "Exit")	{	
			break;
		}
		else { 
			roI = stof(input); 
		}

		input = takeInput("Please enter the principle amount");
		if (input == "exit" || input == "Exit") {
			break;
		}
		else {
			princAmount = stof(input);
		}


		input = takeInput("Please enter the lenght of term (in months)");
		if (input == "exit" || input == "Exit") {
			break;
		}
		else {
			term = stoi(input);
		}
		printCalMonthlyMort(roI, princAmount, term);
	}


}