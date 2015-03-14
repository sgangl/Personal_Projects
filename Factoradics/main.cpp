#include "Permutation.h"

int main(int argc, char *argv[])
{
	std::string testString;
	
	if (argc != 2)
	{
		std::cout << "Program takes exactly one argume (a single word)" << std::endl;
	}
	
	testString = argv[1];
	std::cout << "Word given is: " << testString << std::endl;
	
	Permutation perm(testString);
	
	std::cout << testString << " position in dictionary is: " << perm.factoradic() << std::endl;
	return 0;
}
