#include "../std_lib_facilities.h"

class Date {
    int y, m, d; 
    public:         
    	Date(int year, int month, int day);       
    	void add_day(int n);
    	int month() { return m; }
        int day() { return d; }
        int year() { return y; }
};     

Date::Date(int year, int month, int day){
	if (month < 1 || month > 12 || day < 1 || day > 31)
		error("Invalid date!");
	else{ y = year; m = month; d = day; }
}

void Date::add_day(int n){
	d += n;
	if (d > 31){
		m += d / 31;
		d = d % 31;
	}
	if (m > 12){
		y += m / 12;
		m = m % 12;
	}
}

ostream& operator<<(ostream& os, Date& d){
	return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
}

int main(){

	Date today {1978, 6, 25};
	cout << "Today: " << today << endl;

	Date tomorrow = today;
	tomorrow.add_day(1);
	cout << "Tomorrow: " << tomorrow << endl;

	return 0;
}