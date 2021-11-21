#include "../std_lib_facilities.h"

enum class Month{
	jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
}; 

class Date {
    int y, d; 
    Month m;
    public:         
    	Date(int year, Month month, int day);       
    	void add_day(int n);
    	Month month() const { return m; }
        int day() const { return d; }
        int year() const { return y; }
};    

Date::Date(int year, Month month, int day){
	if (int(month) < int(Month::jan)|| int(month) > int(Month::dec)|| day < 1 || day > 31)
		error("Invalid date!");
	else{ y = year; m = month; d = day; }
}

void Date::add_day(int n){
	d += n;
	while(d > 31){
		d=d-31;
		if (m == Month::dec){
			m = Month::jan; 
			y++;
		}
		else{
			m = Month(int(m) + 1);
		}
	}
}

vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

ostream& operator<<(ostream& os, Date& d){
	return os << '(' << d.year() << ',' << months[int(d.month())-1] << ',' << d.day() << ')';
}

int main(){

	Date today {1978, Month::jun, 25};
	cout << "Today: " << today << endl;

	Date tomorrow = today;
	tomorrow.add_day(1);
	cout << "Tomorrow: " << tomorrow << endl;

	return 0;
}