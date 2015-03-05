/*This program implements a class to get a Roman numeral string from a user,
 * check the input to verify it is a Roman numeral (and discard it if it is not),
 * and convert that Roman numeral into a decimal number.
 * Developled and programmed by Sean Gangle
 * 6 January 2015*/
#include "roman.h"

int main(int argc, char* args[]) {
	RomanNumeral testRoman;
	string testStr;
	
	cout << "Enter a Roman numeral: ";
	cin >> testStr;
	cout << endl;
	
	testRoman.setRoman(testStr);
	testRoman.printRoman();
	testRoman.printDec();
	return 0;
}
