#include "Permutation.h"

Permutation::Permutation(std::string& target)
{
	int i;
	
	for(i = 0; i < target.size(); i++) 
	{
		if(target[i] >= 97) 
			target[i] = target[i] - 32;
	}
	
	myString = target;
}

int Permutation::factorial(const int& degree)
{
	int i;
	int factorialValue;
	
	for (i = 0; i <= degree; i++)
	{
		if (i == 0)
			factorialValue = 1;
			else factorialValue *= i;
	}
	
	return factorialValue;
}

int Permutation::updatePosition(const int& bigger, const int& degree)
{
	if (bigger == 0)
	{
		std::cout << "Update Position with 0" << std::endl;
		return 0;
	}
	else
	{
		return factorial(degree) * bigger;
	}
}

int Permutation::factoradic()
{
	int i = 0;
	int j;
	int bigger;
	int position = 0;
	char compare;
	
	while (i < myString.size())
	{
		compare = myString[i];
		std::cout << compare << std::endl;
		bigger = 0;
		
		for (j = i + 1; j < myString.size(); j++)
		{
			if (compare > myString[j]) bigger++;
		}
		std::cout << "Bigger: " << bigger << std::endl;	
		
		i++;
		std::cout << "Factoradic Location: " << myString.size() - i << std::endl;
		position += updatePosition(bigger, myString.size() - i);
		std::cout << "Position: " << position << std::endl;
	}
	
	return position + 1;
}

