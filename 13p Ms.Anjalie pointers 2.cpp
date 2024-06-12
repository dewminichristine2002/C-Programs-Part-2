#include <iostream>
using namespace std;

int main(){
	
	
	int *m;
	int count=7;
	
	m=&count;
	
	cout<< &count <<endl;//address of the count
	cout<< m<< endl;//address of what is pointed
	cout<< *m<<endl;//value of what is pointed
	cout << &m<<endl;//address of the pointer
	
	return 0;
}
