//functions

#include <iostream>
using namespace std;

float calrecarea(float length, float width);

int main(){
	
	float rec1l,rec2l,rec1w,rec2w,area1,area2;
	
	cout <<"Enter reactangle 01 length :";
	cin >> rec1l;
	
	cout <<"Enter reactangle 01 width :";
	cin >> rec1w;
	
	cout <<"Enter reactangle 02 length :";
	cin >> rec2l;
	
	cout <<"Enter reactangle 02 width :";
	cin >> rec2w;
	
	area1=calrecarea(rec1l,rec1w);
	area2=calrecarea(rec2l,rec2w);
	
	cout << "Area of Rectangle 01 :"<< area1<<endl;
	cout << "Area of Rectangle 02 :"<< area2<<endl;
	
	
	
	return 0;
}

float calrecarea(float length, float width){
	
	return length*width;
}
