#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n){
	for(int i = 0; i < n; ++i)
		os << a[i] << endl;
	return os;
}

int main(){

	int n = 7;
	int* p1 = &n;

	cout << "value of p1: " << p1 << "\tand it points to: " << *p1 << endl;

	int x = 1;
	int* p2 = new int[7];

	for(int i = 0; i < 7; ++i){
		p2[i] = x;	
		x *= 2;
	}

	cout << "value of p2: " << p2 << "\tand the array it points to:\n";

	for (int i = 0; i < 7; ++i)
        cout << p2[i] << endl;

    int* p3 = p2;
    p2 = p1;
    p2 = p3;

    cout << "value of p1: " << p1 << "\tand it points to: " << *p1 << endl;
	cout << "value of p2: " << p2 << "\tand it points to: " << *p2 << endl;

	delete[] p2;

	p1 = new int[10];
	x = 1;

	for(int i = 0; i < 10; ++i){
		p1[i] = x;
		x *= 2;
	}

    p2 = new int[10];

    for (int i = 0; i < 10; ++i)
        p2[i] = p1[i];

    delete[] p1;
    delete[] p2;

    vector<int> v1 (10);
    x = 1;

    for(int i = 0; i < 10; ++i){
		v1[i] = x;
		x *= 2;
	}

    vector<int> v2 (10);

    v2 = v1;

    cout << "v2 vector:\n";

    for(int i = 0; i < v2.size(); ++i)
    	cout << v2[i] << endl;
    
	return 0;
}