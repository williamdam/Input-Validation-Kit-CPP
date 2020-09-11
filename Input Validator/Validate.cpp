#include "Validate.hpp"
#include <string>

bool isInteger(std::string& inputString) {

	// For loop starts at inputString[0]
	int i = 0;

	// If first char is (-) symbol, for loop starts at inputString[1]
	if (inputString[0] == '-') {
		i = 1;
	}

	// Get length of string
	int inputStringLength = inputString.length();

	// Return false if any chars out of range 0-9
	for (i;  i < inputStringLength; i++) {

		// Out of ascii range 0-9
		if (inputString[i] < 48 || inputString[i] > 57) {
			return false;
		}

	}

	// No errors found, return true.
	return true;
}



bool isDecimal(std::string& inputString) {

	// For loop starts at inputString[0]
	int i = 0;

	// If first char is (-) symbol, for loop starts at inputString[1]
	if (inputString[0] == '-') {
		i = 1;
	}

	// Number of decimal symbols
	int numDecimals = 0;

	// Get length of string
	int inputStringLength = inputString.length();

	// Return false if any chars out of range 0-9
	for (i; i < inputStringLength; i++) {

		// Out of ascii range 0-9
		if (inputString[i] < 48 || inputString[i] > 57) {
			
			// If first decimal found, numDecimals++
			if (inputString[i] == 46 && numDecimals == 0) {
				numDecimals++;
			}

			// Return false if out of range or > 1 decimal
			else {
				return false;
			}
			
		}

	}

	// No errors found, return true.
	return true;
}


bool isNegative(std::string& inputString) {

	// Return true if first char is '-'
	if (string[0] == 45) {
		return true;
	}

	// No negative sign found, return false
	return false;
}