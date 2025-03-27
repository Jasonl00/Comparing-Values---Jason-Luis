/*
Jason Luis

Date: March 5,2023

Display the proper prompts to ask the user to input 2 numeric values, one at a time.
Store these values in variables. Your program will then take these two values
compare them to each other and display a message indicating whether the value of
the 1st number is greater than, less than, or equal to the 2nd number. Incase the
user forgot the input s/he provide, your message should display back the numbers
the user input as part of your message resulting after the comparison whether
greater, less, or equal.
*/

#include <iostream>
using namespace std;

int main() {
	// Assign Variables

	int number1, number2;

	// User input 

	cout << "Enter a number: ";
	cin >> number1;

	cout << "Enter a second number: ";
	cin >> number2;

	// Declaring if the numbers are greater, less than, or equal to. 
	if (number1 > number2) {
		cout << number1 << " is greater than or equal to " << number2 << "." << endl;
	}
	else if (number1 < number2) {
		cout << number1 << " is less than or equal to " << number2 << "." << endl;
	}
	else if (number1 == number2) {
		cout << number1 << " is equal to " << number2 << "." << endl;
	}

	return 0;
}