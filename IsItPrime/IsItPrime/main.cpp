#include <stdio.h>
#include <iostream>
using namespace std;

int isitPrime(int number)
{
	int input;
	cin >> input;

	if (input )
	cout << input << endl;

	return number;
}

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

int test(int number)
{
	int coefficient;
	for (int i = number; i >= 0; i--)
	{
		coefficient = factorial(number) / ((factorial(i) * factorial(number-i)));
		cout << coefficient << endl;
	}

	return coefficient;
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
		test(number);
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