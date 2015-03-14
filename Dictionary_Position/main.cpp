#include "stdafx.h"
#include "Permutation.h"

using namespace std;

int main(int argc, char *argv[])
{	
	string userWord = argv[1];
	Permutation userPerm(userWord);
	
	if (argc != 2)
	{
		cout << "Program takes exactly one argument (a single word) from the command line." << endl;
	}
	else if (!userPerm.validate())
	{
		cout << "Please try again." << endl;
	}
	else
	{
		cout << "Target word's position in the dictionary: " << userPerm.position() << endl;
	}
	
	return 0;
}
