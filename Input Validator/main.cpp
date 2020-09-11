/*********************************************************************
** Author: William Dam
** Date: 09-10-2020
** Description: main.cpp is the example imlementation of this Input
** Validation Kit. Array of strings is used to test functions, 
** prints bool 0/1 result to standard output.
*********************************************************************/
#include <iostream>
#include <string>
#include <array>
#include "Validate.hpp"

int main() {

	// Fixed array of strings for input
	std::string inputCases[15] = { "", " ", "-23", "0", "1", "23532",
		"22.5", "0.2", "-.3", "-3.50", "asdf", "a5.5", "1 234", "55.", "23..2" };

	// Get num elements in array
	int arraySize = sizeof(inputCases) / sizeof(inputCases[0]);

	// Call functions using each string in array
	for (int i = 0; i < arraySize; i++) {
		std::cout << "\"" << inputCases[i] << "\", ";
		std::cout << "isNegative: " << isNegative(inputCases[i]) << ", ";
		std::cout << "isInteger: " << isInteger(inputCases[i]) << ", ";
		std::cout << "isDecimal: " << isDecimal(inputCases[i]) << std::endl;
	}

	return 0;
}