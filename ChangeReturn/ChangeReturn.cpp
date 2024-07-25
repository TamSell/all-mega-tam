#include <iostream>
#include <string>
#include <istream>
#include <math.h>

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


void calculateChange(double cost, double spent)
{
	int change;
	change = (100 * (spent - cost));


	if (change < 0) {
		std::cout << "You did not input enough money to cover the purchase cost \n";
		return;
	}
	else if (change == 0) {
		std::cout << "You paid the exact amount \n";
		return;
	}

	std::cout << "Total Change: " << double(change) / 100 << '\n';

	int totPen = 0;
	int totNick = 0;
	int totDime = 0;
	int totQuater = 0;
	int totDollar = 0;

	while (change != 0)
	{
		if (change  - 100 >= 0) {
			change -= 100;
			++totDollar;
		}
		else if (change - 50 >= 0) {
			change -= 50;
			++totNick;
		}
		else if (change - 25 >= 0) {
			change -= 25;

			++totQuater;
		}
		else if (change - 10 >= 0) {
			change -= 10;

			++totDime;
		}
		else if (change - 5 >= 0) {
			change -= 5;

			++totNick;
		}
		else if (change - 1 >= 0) {
			change -= 1;

			++totPen;
		}
	}

	std::cout << "Num of each Change: \n" << "Dollars: " << totDollar << "\nQuaters: " << totQuater << "\nDimes: " << totDime << "\nNickles: " << totNick << "\nPennies: " << totPen << '\n' << '\n';

}

int main()
{
	double itemCost = 0;
	double moneyGiven = 0;
	double changTot = 0;
	std::string userInput = "";
	std::string whileClose = "exit";
	std::cout << "\t\t This is a change return calculator, please follow the on screen instructions or enter exit at any time to quit the program \n\n";

	while (1)
	{
		userInput = takeInput("Please enter the cost of an item");
		if (userInput == "exit") {
			break;
		}
		else {
			itemCost = stof(userInput);
		}
		userInput = takeInput("Please enter the amount of change you wish to use to purchase");
		if (userInput == "exit") {
			break;
		}
		else {
			moneyGiven = stof(userInput);
		}
		calculateChange(itemCost, moneyGiven);
	}

}
