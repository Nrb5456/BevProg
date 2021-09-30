#include "std_lib_facilities.h"

int main()
{
	string first_name, friend_name;
	char friend_sex = 0;
	int age = 0;

	cout << "Enter the name of the person you want to write to: "; 
	cin >> first_name;

	cout << "Age: "; 
	cin >> age;

	if((age <= 0) || (age >= 110))
		simple_error("you're kidding!");

	cout << "Friend name: ";
	cin >> friend_name;

	cout << "Friend sex(f/m): ";
	cin >> friend_sex;

	cout << "Dear " << first_name << "," << endl;

	cout << "\t" << "How are you? I am fine. I miss you. Have you seen " 
	<< friend_name << " lately? ";

	if(friend_sex == 'm')
		cout << "If you seen " << friend_name << " please ask him to call me. ";
	if(friend_sex == 'f')
		cout << "If you seen " << friend_name << " please ask her to call me. ";

	if(((age > 12) && (age < 17)) || ((age > 17) && (age <70)))
		cout << "I hear you just had a birthday and you are " << age << " years old!" << endl;
	else
		cout << "I hear you just had a birthday and you are " << age << " years old! ";
	if(age < 12)
		cout << "Next year you will be " << ++age << ". " << endl;
	else if(age == 17)
		cout << "Next year you will be able to vote. " << endl;
	else if(age > 70)
		cout << "I hope you are enjoying retirement. " << endl;

	cout << "Yours sincerely, \n\n";
	cout << "\n"; 
	cout << "Norbi. \n";
	
	return 0;
}