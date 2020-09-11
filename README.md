Author Name: William Dam
Date: 09-10-2020

Program Title: Input Validation Kit CPP

Description: Three input validation functions for use in C++. Check
to see if an input string has a negative sign, is a valid integer, and 
is a valid decimal.

Programming Language: C++

File Descriptions

Validate.hpp - Header file contains function prototypes.
Validate.cpp - Implementation file contains all input validation functionss.
	isNegative(string) - Takes a string input and returns true if string
	starts with '-' char.
	isInteger(string) - Takes a string input and returns true if string
	is a valid integer.
	isDecimal(string) - Takes a string input and returns true if string
	is a valid decimal number.
main.cpp - Contains main program file to demonstrate functionality of functions.

Dependencies

None

HOW TO USE

1. Upload Validate.hpp and Validate.cpp to your C++ project directory.
2. #include "Validate.hpp" in your cpp file that will use this validation kit.
3. Invoke functions and pass string arg.
4. Receive bool return type, and add your own logic to proceed.

Tip: Use getline() to read string from input.

Example use case:

string inputString = "";
bool isValidInt = false;

while (isValidInt == false) {
	std::cout << "Enter an integer: ";
	getline(std::cin, inputString);
	if (isInteger(inputString) == true) {
		isValidInt == true;
	}
	else {
		std::cout << std::endl;
		std::cout << "You must enter a valid integer!\n";
	}
}
	
