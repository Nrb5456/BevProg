#include "../std_lib_facilities.h"

ostream& print_array10(ostream&  os,  int*  a){
	for(int i = 0; i < 10; ++i)
		os << a[i] << endl;
	return os;
}

ostream& print_array(ostream& os, int* a, int n){
	for(int i = 0; i < n; ++i)
		os << a[i] << endl;
	return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v) os << vv << endl;
    return os;
}

int main(){

	int* array = new int[10];
	int* array2 = new int[10];
	int* array3 = new int[11];
	int* array4 = new int[20];

	vector<int> vec(10);

	/*for(int i = 0; i < 10; ++i)
		cout << array[i] << endl;*/

	//print_array10(cout, array);

	int n = 100;

	/*for(int i = 0; i < 10; ++i){
		array2[i] = n;	++n;
		cout << array2[i] << endl;
	}*/

	/*for(int i = 0; i < 11; ++i){
		array3[i] = n;	++n;
		cout << array3[i] << endl;
	}*/

	/*for(int i = 0; i < 20; ++i){
		array4[i] = n;	++n;
	}*/

	//print_array(cout, array4, 20);

	for (int& v : vec) {
        v = n;	++n;
    }

    print_vector(cout, vec);


	delete[] array;
	delete[] array2;
	delete[] array3;
	delete[] array4;

	return 0;
}