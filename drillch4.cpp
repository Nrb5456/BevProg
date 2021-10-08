#include "std_lib_facilities.h"

int main(){

	const double m_to_cm = 100, in_to_cm = 2.54, ft_to_in = 12;
	double lenght = 0, max = -100, min = 100, sum = 0, num = 0;
	string unit;
	vector<double> values;

	/*double a, b;

	while(cout << "Enter 2 numbers:\n", cin >> a >> b)
		if(a > b){
			cout << "the smaller value is: " << b << "\nthe larger value is: " << a << '\n';
			if(a - b < 0.01)
				cout << "the numbers are almost equal\n";
		}
		else if(a == b)
			cout << "the numbers are equal\n";
		else{
			cout << "the smaller value is: " << a << "\nthe larger value is: " << b << '\n';
			if(b - a < 0.01)
				cout << "the numbers are almost equal\n";
		}*/		//elso 5 feladat

	/*while(cin >> a){
		if(a > max){
			max = a;	cout << "the largest number yet\n";
		}
		if(a < min){
			min = a;	cout << "the smnallest yet\n";
		}
	}*/	//6. feladat


	cout << "Please enter lenght and unit(cm, m, ft, in)!\n";

	while(cin >> lenght >> unit){
		if(unit == "cm"){
			++num;	sum = sum + lenght / m_to_cm;
			if(lenght > max)
				max = lenght;
			if(lenght < min)
				min = lenght;
			values.push_back(lenght / m_to_cm);
		}
		else if(unit == "in"){
			++num;	sum = sum + (lenght * in_to_cm) / m_to_cm;
			if(lenght > max)
				max = lenght;
			if(lenght < min)
				min = lenght;
			values.push_back((lenght * in_to_cm) / m_to_cm);
		}
		else if(unit == "ft"){
			++num; sum = sum + ((lenght * ft_to_in) * in_to_cm) / m_to_cm;
			if(lenght > max)
				max = lenght;
			if(lenght < min)
				min = lenght;
			values.push_back(((lenght * ft_to_in) * in_to_cm) / m_to_cm);
		}
		else if(unit == "m"){
			++num;	sum = sum + lenght;
			if(lenght > max)
				max = lenght;
			if(lenght < min)
				min = lenght;
			values.push_back(lenght);
		}
		else	cerr << "Illegal unit!\n";
	}

	cout << "Sum: " << sum << " m\n"; 
	cout << "Number of values: " << num << '\n';
	cout << "Smallest value: " << min << '\n';
	cout << "Largest value: " << max << '\n';

	sort(values);

	for(int i = 0; i < values.size(); ++i)
		cout << values[i] << '\n';

	return 0;
}