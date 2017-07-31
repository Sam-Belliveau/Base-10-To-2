# Base 10 To 2
This is a simple app that turns numbers to binary.

The code for this is:
```cpp
void printBinary(long long int number) {
	int remainder; // Establish Remainder Var
	if (number <= 1) { cout << number; return; } // Checks To See If It Is At The Last Digit
	remainder = number % 2; // Remainder Is Either 1 or 0
	printBinary(number/2); // Continues Equation 1 Step Down The Binary Digits
	cout << remainder; // Prints Remainder
}
```
