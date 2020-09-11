/*********************************************************************
** Author: William Dam
** Date: 09-10-2020
** Description: Validate.cpp is the implementation file for the
** input validation kit.
*********************************************************************/
#include "Validate.hpp"
#include <string>
#include <cmath>

/*********************************************************************
** Description: Function checks if input string has negative '-' sign. 
** Arguments: string
** Returns: Bool, true if negative sign '-' present.
*********************************************************************/
bool isNegative(std::string& inputString) {

	// Return true if first char is '-'
	if (inputString[0] == 45) {
		return true;
	}

	// No negative sign found, return false
	return false;
}

/*********************************************************************
** Description: Function checks if input string is valid integer.
** Arguments: string
** Returns: Bool, true if valid integer.
*********************************************************************/
bool isInteger(std::string& inputString) {

	if (inputString == "") {
		return false;
	}

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

/*********************************************************************
** Description: Function checks if input string is valid decimal.
** Arguments: string
** Returns: Bool, true if valid decimal.
*********************************************************************/
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

	// One decimal found
	if (numDecimals == 1) {
		return true;
	}

	// Valid int, but no decimals 
	return false;
}

/*********************************************************************
** Description: Function converts input to integer
** Arguments: string
** Returns: Int.  Returns 0 if string not valid integer.
** Notes: If string is not valid int, return 0.
*********************************************************************/
int convertToInteger(std::string& inputString) {

	int outputNumber = 0;

	if (isInteger(inputString)) {
		if (isNegative(inputString)) {
			outputNumber = stoi(inputString.erase(0, 1));
			outputNumber *= -1;
		}
		else {
			outputNumber = stoi(inputString);
		}
	}
	
	return outputNumber;
}