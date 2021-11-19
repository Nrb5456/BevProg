 #include "my.h"
 
 int foo = 7;
 
 int main(){

 	print_foo();
 	print(99);

 	
 	int x = 7;
	int y =9;
	
	swap_v(x,y);	//compiled
	print(x);
	print(y);
	
	swap_v(7,9); 	//compiled
	print(x);
	print(y);
	
	swap_r(x,y);	//compiled
	print(x);
	print(y);
	
	swap_r(7,9);
	
	const int cx = 7;
	const int cy = 9;
	
	swap_v(cx,cy);		//compiled
	print(cx);
	print(cy);
	
	swap_v(7.7,9.9);	//compiled
	print(cx);
	print(cy);
	
	swap_r(cx,cy);
	swap_r(7.7,9.9);
	double dx = 7.7;	
	double dy = 9.9;
	
	swap_v(dx,dy);		//compiled
	print(dx);
	print(dy);
	
	swap_v(7.7,9.9);	//compiled
	print(dx);
	print(dy);
	
	swap_r(dx,dy);
	
	swap_r(7.7,9.9);
	
 }