#include <iostream>

int main()
{
	std::cout << 101010 % 1 << '\n';

	int ten = 1010;
	int one = 0001;
	int test = ten & one;
	int iter = 1;
	int decOut = 0;
	while (ten >= 0)
	{
		if (ten | one == 0){
			ten -= (10 * iter);
		}
		
		if (iter == 1){
			decOut += 1;
			++iter;
			ten -= (10 * iter);
		}
		else {
			decOut += (2 * iter);
			++iter;
			ten -= (10 * iter);
		}
	}

	std::cout << test;
}