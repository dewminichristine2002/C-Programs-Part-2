//object programming 

#include <iostream>
using namespace std;


float calperi(float l, float w);
float calarea(float l, float w); 

int main (){
	
	float l,w,peri,area;
	
	cout <<"Enter length :" ;
	cin>> l;
	
	cout << "Enter width :";
	cin >> w;
	
	peri= calperi(l,w);
	area= calarea(l,w);
	
	cout <<"Perimeter =" <<peri<< endl;
	cout <<"Area =" << area;
	
	
	
	return 0;
}

float calperi(float l, float w)
{
	return 2*(l+w);
}

float calarea(float l, float w)
{
	return l*w;
 } 

