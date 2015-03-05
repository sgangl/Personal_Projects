#include "day.h"

string Day::dayArray[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

Day::Day() {
	dayName = "UNSET";
	dayId = -1;
}

Day::Day(string& set) {
	int i;
	for(i = 0; i < set.size(); i++) {
		if(set[i] >= 97) set[i] = set[i] - 32;
	}
	
	//i < 7 for size of array (number of days in the week)
	for(i = 0; i < 7; i++) {
			if(dayArray[i][0] == set[0]	 && dayArray[i][1] == set[1])
				dayName = dayArray[i];
	}
}

Day::Day(const int& id) {
	if(id > 6 || id < 0) {
		cout << "Invalid range entered. Calling default constructor." << endl;
		Day();
		cout << endl;
	}
	else {
		int i;
		for(i = 0; i < 7; i++) {
			if(id == i) dayName = dayArray[i];
		}
	}
	
}

string Day::getDay() {
	return dayName;
}

void Day::setDay(const int& newDay) {
	if(newDay-1 < 0) dayName = dayArray[0];
	else dayName = dayArray[newDay-1];
}

string Day::tomorrow() {
	int tomorrow;
	if(dayId == 6) tomorrow = 0;
	else tomorrow = dayId + 1;
	
	return dayArray[tomorrow];
}

string Day::yesterday() {
	int yesterday;
	if(dayId == 0) yesterday = 6;
	else yesterday = dayId -1;
	
	return dayArray[yesterday];
}


string Day::futureDay(const int& future) {
	int result;
	result = dayId;
	
	int i;
	for(i = 0; i < future; i++) {
		result++;
		if(result > 6) result = 0;
	}
	
	return dayArray[result];
}
