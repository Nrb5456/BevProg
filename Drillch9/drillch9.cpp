#include "../std_lib_facilities.h"

namespace DateSpace{

	class Year {
		static constexpr int min = 0;
		static constexpr int max = 2100;
		public:
			class Invalid{};
			Year (int x): y{x} { if (x < min || x > max) error("Invalid year!"); }
			int year(){ return y; }
			void increment() { y++; }
		private:
			int y;
	};

	Year operator++(Year& year)
	{
		year.increment();
	}

	ostream& operator<< (ostream& os, Year year)
	{
		return os << year.year();
	}

	enum class Month {
		jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
	};

	const vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	Month operator++(Month& m)
	{
		m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
		return m;
	}

	ostream& operator<<(ostream& os, Month m)
	{
		return os << months[int(m)];
	}

	class Date {
		Year year;
		Month month;
		int day;
	public:
		class Invalid {};
		Date(Year y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) error("Invalid date!"); }
		bool is_valid();
		void add_day(int n);
		Year get_year() const { return year; }
		Month get_month() const { return month; }
		int get_day() const { return day; }
	};

	bool Date::is_valid()
	{
		if (day < 1 || day > 31) return false;
		return true;
	}

	void Date::add_day(int n)
	{
		day += n;
		if (day > 31) 
		{
			++month;
			day -= 31;
			if (month == Month::jan)
			{
				++year;
			}
		}
	}
}

int main(){

	using namespace DateSpace;

	Date today {Year{1978}, Month::june, 25};

	cout << "Today: " << today.get_year() << ". " << today.get_month() << " " << today.get_day() << ".\n";

	Date tomorrow = today;
	tomorrow.add_day(1);

	cout << "Tomorrow: " << tomorrow.get_year() << ". " << tomorrow.get_month() << " " << tomorrow.get_day() << ".\n";

	return 0;
}