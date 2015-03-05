#include "stdafx.h"
#include "searchAlgorithms.hpp"

using namespace std;

int main(int argc, char *argv[]) {
	int intList[] = {2, 16, 34, 45, 53, 56, 69, 70, 75, 96};
	
	int pos;
	
	pos = binarySearch(intList, intList.size(), 45);
	
	if (pos != -1) {
		cout << 45 << " found at position " << pos << endl;
	}
	else {
		cout << 45 << " is not in intList." << endl;
	}
	
	return 0;
}

