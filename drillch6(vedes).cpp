#include "std_lib_facilities.h"

bool is_prime(int n){
	if(n <= 1)
		return false;
	for(int i = 2; i <=n; ++i)
		if(n % i == 0)
			return false;
		else	return true;
}

int main(){

	if(is_prime() == true)
		cout << "true\n";
	else	cout << "false\n";
	
	return 0;
}