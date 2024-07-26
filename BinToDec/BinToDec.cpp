#include <iostream>


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


int main()
{
	int ten = 1010;
	int one = 0001;
	int test = ten & one;
	int iter = 0;
	int decOut = 0;
	while (ten > 0)
	{
		if (ten & one)
		{
			ten = ten / 10;
			decOut += myExpon(2, iter);
		}
		else {
			ten = ten / 10;
		}
		++iter;

	}

		std::cout << "Dec out: " << decOut;
}