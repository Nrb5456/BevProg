#include "std_lib_facilities.h"

int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int array[], int n){
	int la[10];
	cout << "Elements of la[]:\n";
	for(int i = 0; i < n; ++i){
		la[i] = array[i];
		cout << la[i] << endl;
	}

	int* p = new int[n];

	cout << "Elements of free-store array:\n";
	for(int i = 0; i < n; ++i){
		p[i] = la[i];
		cout << p[i] << endl;
	}

	delete[] p;
}

int factorial(int n) { 
	if(n < 1)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	
	f(ga, 10);

	int aa[10];
	for (int i = 0; i < 10; ++i)
        aa[i] = factorial(i + 1);

    cout << "function f() with aa(firts ten factorial values) as its argument:\n";
    f(aa, 10);

	return 0;
}