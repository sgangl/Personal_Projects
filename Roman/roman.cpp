#include "roman.h"

RomanNumeral::RomanNumeral()
{
	/*default values only*/
	decimalNumber = 0;
	romanNumber = "Z";
}

void RomanNumeral::printRoman() {
	cout << romanNumber << endl;
}

void RomanNumeral::printDec() {
	cout << decimalNumber << endl;
}

/*isRoman: determine if the string is a Roman numeral*/
bool RomanNumeral::isRoman(const string& romanNum) {
	bool allow = true;
	
	int i = 0;
	while(allow && i < romanNum.size()) {
		switch (romanNum[i]) {
			/*I*/
			case 73:
				break;
			/*V*/
			case 86:
				break;
			/*X*/
			case 88:
				break;
			/*C*/	
			case 67:
				break;
			/*D*/	
			case 68:
				break;
			/*M*/
			case 77:
				break;
			default:
				allow = false;
		}
		
		i++;
	}
		
		return allow;
}

/*setRoman: set the object's romanNumber by testing a given a string*/
void RomanNumeral::setRoman(string num) {
	int i;
	for(i = 0; i < num.size(); i++) {
		if(num[i] >= 97) num[i] = num[i] - 32;
	}
	
	romanNumber = num;
	if(!isRoman(num)) cout << "Not a valid Roman numeral." << endl;
	toDecimal(num);
}

/*getDec: return the decimal number of an object*/
int RomanNumeral::getDec() {
	return decimalNumber;
}

/*getRoman: return the roman number of an object*/
string RomanNumeral::getRoman() {
	return romanNumber;
}

/*toDecimal: convert the roman numeral to a decimal number*/
void RomanNumeral::toDecimal(const string& roman) {
	int sum = 0;
	int add = -1;
	
	int i;
	for(i = 0; i < roman.size(); i++) {		
		switch (roman[i]) {
			/*I*/
			case 73:
			/*Test for end of string after current digit*/
				if(i + 1 < roman.size()) {
					switch (roman[i + 1]) { 
						/*I*/
						case 73:
							add = 1;
							break;
						/*V*/
						case 86:
							add = 4;
							i++;
							break;
						/*X*/
						case 88:
							add = 9;
							i++;
							break;
						/*C*/	
						case 67:
							add = 99;
							i++;
							break;
						/*D*/	
						case 68:
							add = 499;
							i++;
							break;
						/*M*/
						case 77:
							add = 999;
							i++;
							break;
						default:
							add = 0;
							cout << "End of Roman Numeral." << endl;
							break;
					}
				}
				else add = 1;
				break;
			/*V*/
			case 86:
				add = 5;
				break;
			/*X*/
			case 88:
				add = 10;
				break;
			/*C*/	
			case 67:
				add = 100;
				break;
			/*D*/	
			case 68:
				add = 500;
				break;
			/*M*/
			case 77:
				add = 1000;
				break;
			default:
				add = 0;
				cout << "End of Roman Numeral." << endl;
				break;
		}
	
	sum += add;		
	}
	decimalNumber = sum;
}
//toRoman
