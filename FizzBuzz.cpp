// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void FizzBuzz();


int main()
{
	FizzBuzz();
}

void FizzBuzz()
{
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		sum += 1;
		if (sum % 3 == 0 && sum % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else
		{
			if (sum % 3 == 0)
			{
				std::cout << "Fizz" << std::endl;
			}
			else if (sum % 5 == 0)
			{
				std::cout << "Buzz" << std::endl;
			}
			else
			{
				std::cout << sum << std::endl;
			}
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
