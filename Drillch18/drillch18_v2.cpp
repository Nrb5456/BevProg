#include "../std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};


void f(vector<int> v){
	vector<int> lv(10);

	lv = v;
	cout << "elements of lv vector:\n";
	for(int i = 0; i < 10; ++i)
		cout << lv[i] << endl;

	vector<int> lv2 = v;

	cout << "elements of lv2 vector:\n";
	for(int i = 0; i < 10; ++i)
		cout << lv2[i] << endl;
}

int factorial(int n) { 
	if(n < 1)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	cout << "function f() with gv as argument:\n";
	f(gv);

	vector<int> vv(10);

	for (int i = 0; i < vv.size(); ++i)
        vv[i] = factorial(i + 1);

    cout << "function f() with vv as argument:\n";
    f(vv);
	return 0;
}