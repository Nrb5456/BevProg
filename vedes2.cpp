#include "std_lib_facilities.h"

class Car{
	private:
		int y;
		string t;
		string b;
	public:
		const int current_year = 2021;
		void is_OT();
		Car(int year, string type, string brand); 
		string type() { return t; }
        string brand() { return b; }
        int year() { return y; }
};

Car::Car(int year, string type, string brand){
	if(year < 1800)
		error("Invalid year!");
	else{ y = year; t = type; b = brand; }
}

void Car::is_OT(){	
	if(current_year - y >30)
		cout << "This car is an old timer.\n";
	else	cout << "This car is not an old timer.\n";
}

/*ostream& operator<<(ostream& os, Car& c){
	return os << c.type() << ',' << c.brand() << ',' << c.year();
}*/

int main()
{

	Car first {2012, "Valami", "Valami"};
	first.is_OT();

	//cout << first << endl;

	return 0;
}