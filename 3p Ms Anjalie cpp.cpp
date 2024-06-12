//with the use of struct

#include <iostream>
using namespace std;

float calperi(float l, float w);
float calarea(float l, float w); 


struct Rectangle
{
	int l;
	int w;
} rec1;

int main (){
	
	float peri,area;
	
	cout <<"Enter length :" ;
	cin>> rec1.l;
	
	cout << "Enter width :";
	cin >> rec1.w;
	
	peri= calperi(rec1.l,rec1.w);
	area= calarea(rec1.l,rec1.w);
	
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



