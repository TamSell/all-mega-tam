#include <iostream>
#include <string>

void printCalCost(int width, int height, int cost)
{
	std::cout << "$" << (width * height) * cost << '\n';
}

float takeInput(std::string message)
{
	float input;

	std::cout << message << ": ";

	std::cin >> input;

	std::cout << '\n';

	return input;
}

int main()
{
	float width = 0.f;
	float height = 0.f;
	float cost = 0.f;

	std::cout << "\t" << "Tile Cost Program -- Enter 0 at any time to exit \n";


	while (1)
	{
		width = takeInput("Enter Width of Floor in tiles: ");
		if (width == 0)
			break;
		height = takeInput("Enter Height of Floor in tiles: ");
		if (height == 0)
			break;
		cost = takeInput("Enter Cost of Tile: ");
		if (cost == 0)
			break;
		printCalCost(width, height, cost);
	}

}