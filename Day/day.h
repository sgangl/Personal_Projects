#include <iostream>
#include <string>
using namespace std;

class Day {
public:
Day();
Day(string&);
Day(const int&);
string getDay();
string tomorrow();
string yesterday();
string futureDay(const int&);

private:
void setDay(const int&);
int dayId;
string dayName;
static string dayArray[];
};
