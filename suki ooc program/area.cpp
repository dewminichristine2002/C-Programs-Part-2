
#include <iostream>
#include "rectangle.h"
using namespace std;

int main(){
	
	rectangle rec1;
	rectangle rec2;
	
	
	rec1.setlength(12);
	rec1.setwidth(10);
	
	cout << rec1.calarea()<<endl;
	
	cout <<"length of rec 1:"<<rec1.getlength();
	
	
	return 0;
	
}
