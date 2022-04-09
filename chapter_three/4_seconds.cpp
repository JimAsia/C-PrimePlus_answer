#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	const int day = 60 * 60 * 24;
	const int hour = 60 * 60;
	const int minute = 60;
	long seconds, days, hours, minutes;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = ";
	
	days = seconds / day;
	seconds -= (days * day);
	
	hours = seconds / hour;
	seconds -= (hours * hour);
	
	minutes = seconds / minute;
	seconds -= (minute * minutes);
	
	cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.\n";
	
	return 0;
}


