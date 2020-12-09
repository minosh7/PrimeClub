#include <stdio.h>
#include <iostream>
#include "InfInt.h"
using namespace std;

InfInt power(InfInt number, InfInt indice)
{
	InfInt ans = 1;
	for (InfInt i = 0; i < indice; i++)
	{
		ans = ans * number;
	}
	cout << "Your answer is: " << ans << endl;
	cout << " " << endl;
	return ans;
}

InfInt factorial(InfInt number)
{
	InfInt ans = 1;
	for (InfInt i = number; i > 0; i--)
	{	
		ans = ans * i;
	}
	return ans;
}

InfInt extract_coefficient(InfInt number)
{
	InfInt coefficient;
	bool isDivisible = true;
	for (InfInt i = number; i >= 0; i--)
	{
		coefficient = factorial(number) / ((factorial(i) * factorial(number-i)));
		cout << "Checking Coefficients: " << coefficient << endl;
		cout << " " << endl;
		if (coefficient != 1 && coefficient % number != 0)
		{
			isDivisible = false;
			break;
		}
	}

	if (isDivisible == true)
	{
		cout << "Number is prime" << endl;
		cout << " " << endl;
	}
	else if (isDivisible == false)
	{
		cout << "Not a prime!" << endl;
		cout << " " << endl;
	}

	return coefficient;
}

InfInt isitPrime(InfInt number)
{
	InfInt result = number;
	cout << result << endl;
	return result;
}

int main()
{
	char choice = 'Y';
	while (choice == 'Y' || choice == 'y')
	{
		InfInt number;
		InfInt indice;
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