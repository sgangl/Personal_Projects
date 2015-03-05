#include "stdafx.h"
#include "sortAlgorithms.hpp"

using namespace std;

int main(int argc, char *argv[]) {

	int i;
	int length;
	
	string strArray[] = {"Sean", "Lauryn", "Billy", "Aaron", "Richard", "John", "Jessica", "Conrad"};
	int intArray[] = {19, 5, 74, 2, -6, 11, 436, 2, 8, 7, 321, 8543, 94, 19};
	
	length = 7;
	cout << "Array of Strings before sort: ";
	for (i = 0; i < length; i++) {
		cout << strArray[i] << " ";
	}
	cout << endl;
	
	quickSort(strArray, 0, length);
	
	cout << "Array of Strings after sort: ";
	for (i = 0; i < length; i++) {
		cout << strArray[i] << " ";
	}
	cout << endl << endl;
	
	length = 13;
	cout << "Array of Ints before sort: ";
	for (i = 0 ; i < length; i++) {
		cout << intArray[i] << " ";
	}
	cout << endl;
	
	quickSort(intArray, 0, length);
	
	cout << "Array of Ints after sort: ";
	for (i = 0; i < length; i++) {
		cout << intArray[i] << " ";
	}
	cout << endl;
	
	return 0;
}
