/*This program tests the implementation of the class Day,
 * which tracks the name of a day, a unique day ID for each day, 
 * and can determine the name of a day at some point in time
 * (yesterday, tomorrow, future)*/
#include "day.h"

int main(int argc, char* args[]) {
	string stringConstructor = "Sunday"; //string literal in constructor wasn't working
	
	Day defaultDay;
	Day intDay(3);
	Day strDay(stringConstructor);
	
	cout << "defaultDay is : " << defaultDay.getDay() << endl;
	cout << "intDay is : " << intDay.getDay() << endl;
	cout << "strDay is : " << strDay.getDay() << endl;
	cout << endl;
	
	cout << "Tomorrow is: " << intDay.tomorrow() << endl;
	cout << "Yesterday was: " << intDay.yesterday() << endl;
	cout << "In " << 2 << " days it will be: " << intDay.futureDay(2) << endl;
	cout << "In " << 10 << " days it will be: " << intDay.futureDay(10) << endl;
	cout << "In " << 100 << " days it will be: " << intDay.futureDay(100) << endl;
	return 0;
}
