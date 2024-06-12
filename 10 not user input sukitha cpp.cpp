//functions

#include <iostream>
using namespace std;

float calrecarea(float length, float width);

int main(){
	
	float area1,area2;
	
	
	
	area1=calrecarea(10,5);
	area2=calrecarea(20,10);
	
	cout << "Area of Rectangle 01 :"<< area1<<endl;
	cout << "Area of Rectangle 02 :"<< area2<<endl;
	
	
	
	return 0;
}

float calrecarea(float length, float width){
	
	return length*width;
}
