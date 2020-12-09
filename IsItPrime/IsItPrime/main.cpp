#include <stdio.h>
#include <iostream>
#include "InfInt.h"
using namespace std;

int power(int number, int indice)
{
	int ans = 1;
	for (int i = 0; i < indice; i++)
	{
		ans = ans * number;
	}
	cout << "Your answer is: " << ans << endl;
	cout << " " << endl;
	return ans;
}

int factorial(int number)
{
	int ans = 1;
	for (int i = number; i > 0; i--)
	{	
		ans = ans * i;
	}
	return ans;
}

int extract_coefficient(int number)
{
	int coefficient;
	for (int i = number; i >= 0; i--)
	{
		coefficient = factorial(number) / ((factorial(i) * factorial(number-i)));
		while (coefficient)
		{
			if (coefficient % number != 0 && coefficient % number != 1)
			{
				cout << "NOT A PRIME!" << endl;
				break;
				
			}
			else
			{
				cout << "Number is a prime." << endl;
				break;
				
			}
		}
	}
	return coefficient;
}

int isitPrime(int number)
{
	int result = number;
	cout << result << endl;
	return result;
}

int main()
{
	char choice = 'Y';
	while (choice == 'Y' || choice == 'y')
	{
		int number;
		int indice;
		cout << "Welcome to the club. Enter the password. " << endl;
		cout << "Enter number: ";
		cin >> number;
		cout << "Enter the power you want to raise it to: ";
		cin >> indice;
		power(number, indice);
		factorial(number);
		extract_coefficient(number);
		cout << " " << endl;
		cout << "Would you like to go again?" << endl;
		cin >> choice;
		cout << " " << endl;
		if (choice == 'n' || choice == 'N')
		{
			break;
		}
	}

	return 0;
}