#pragma once

#include "stdafx.h"

class Permutation
{
public:
	Permutation(std::string& input);
	long int position();
	std::string getWord() const;
	bool validate();
	
private:
	std::string word;
	bool validInput;
};
