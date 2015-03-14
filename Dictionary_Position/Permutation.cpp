#include "Permutation.h"

Permutation::Permutation(std::string& input)
{
	int i;
	
	for(i = 0; i < input.size(); i++) 
	{
		if(input[i] >= 97) 
			input[i] = input[i] - 32;
	}
	
	word = input;
	validInput = true;
}

bool Permutation::validate()
{
	int i;
	bool nonAlphaChars = false;
	
	if (word.size() > 20) 
	{
		validInput = false;
		std::cout << "Target word is longer than the maximum 20 characters." << std::endl;
	}
	
	for (i = 0; i < word.size(); i++)
	{
		if (word[i] > 122 || word[i] < 65) 
		{
			validInput = false;
			nonAlphaChars = true;
		}
	}
	if (nonAlphaChars) std::cout << "Target word contains non-alphabetic characters." << std::endl;
	
	return validInput;
}

long int Permutation::position()
{
	long int dictionaryPosition = 1;
	long int priorPermutations = 1;
	char compare;
	int letterCount;
	std::map<char, int> counts;
	
	for (int i = word.size() - 1; i > -1; i--)
	{
		compare = word[i];
		letterCount = counts.count(compare) ? counts.at(compare) + 1 : 1;
		counts[compare] = letterCount;
		
		for (auto &iter : counts)
		{
			if (iter.first < compare) 
			{
				dictionaryPosition += priorPermutations * iter.second / letterCount;
			}
		}
		priorPermutations *= word.size() - i;
		priorPermutations /= letterCount;
	}
	
	return dictionaryPosition;
}

std::string Permutation::getWord() const
{
	return word;
}
