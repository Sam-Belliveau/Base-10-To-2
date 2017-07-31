#include "stdafx.h"
using namespace std;	
void printBinary(long long int number) {
	int remainder; // Establish Remainder Var
	if (number <= 1) { cout << number; return; } // Checks To See If It Is At The Last Digit
	remainder = number % 2; // Remainder Is Either 1 or 0
	printBinary(number/2); // Continues Equation 1 Step Down The Binary Digits
	cout << remainder; // Prints Remainder
}
int main()
{
	long long int input; // Establishes Variable
	while (1) {
		cout << "Enter Number: ";
		cin >> input; // Enter Input
		if (cin.fail()) { cout << "\nInput Failed!\n\n\n"; cin.clear(); cin.ignore(INT64_MAX, '\n');} // Check For Failed Input
		else { printBinary(input); cout << "\n\n\n";} // Print Result
	}
}

