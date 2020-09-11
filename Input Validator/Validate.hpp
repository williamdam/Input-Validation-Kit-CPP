/*********************************************************************
** Author: William Dam
** Date: 09-10-2020
** Description: Validate.hpp is the specification file for the
** input validation functions, contained in a separate implementation
** file.
*********************************************************************/
#ifndef Validate_hpp
#define Validate_hpp
#include <string>

// Checks if string is negative
bool isNegative(std::string& inputString);

// Checks if string is valid integer
bool isInteger(std::string& inputString);

// Checks if string is valid decimal
bool isDecimal(std::string& inputString);

#endif