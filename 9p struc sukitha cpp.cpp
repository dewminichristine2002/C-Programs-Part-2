#include <iostream>
using namespace std;

float calrecarea(float length, float width);

struct Rectangle {
	float lengthr,widthr;
}rec1,rec2;

int main(){
	
	float area1,area2;
	
	cout <<"Enter reactangle 01 length :";
	cin >> rec1.lengthr;
	
	cout <<"Enter reactangle 01 width :";
	cin >> rec1.widthr;
	
	cout <<"Enter reactangle 02 length :";
	cin >> rec2.lengthr;
	
	cout <<"Enter reactangle 02 width :";
	cin >> rec2.widthr;
	
	area1=calrecarea(rec1.lengthr,rec1.widthr);
	area2=calrecarea(rec2.lengthr,rec2.widthr);
	
	cout << "Area of Rectangle 01 :"<< area1<<endl;
	cout << "Area of Rectangle 02 :"<< area2<<endl;
	
	
	
	return 0;
}

float calrecarea(float length, float width){
	
	return length*width;
}
