#pragma once

#include "stdafx.h"

class Permutation
{
public:
	Permutation (std::string& target);
	int factoradic();
	
private:
	std::string myString;
	int myStringSize;
	int updatePosition (const int& bigger, const int& degree);
	int factorial (const int& degree);
};
