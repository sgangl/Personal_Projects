/*1) Note: no mutator for decimalNumber as of 6 Jan 2015
 * toDecimal fulfills this role (user should not be directly manipulating decimalNumber)*/
#include <iostream>
#include <string>
using namespace std;

class RomanNumeral {
public:
RomanNumeral();
void setRoman(string);
int getDec();
string getRoman();
void printRoman();
void printDec();

private:
int decimalNumber;
string romanNumber;
bool isRoman(const string&);
void toDecimal(const string&);
//void toRoman(); *revisit: convert a decimal to a roman number*
};
