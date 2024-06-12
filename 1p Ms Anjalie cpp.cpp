#include <iostream>

//structured program to find the perimeter, area of the rectangle

int main(){
	
	float l,w,a,p;
	
	std::cout << "Enter length :";
	std::cin>> l;
	
	std::cout << "Enter Width :";
	std::cin >> w;
	
	a=l*w;
	p=2*(l+w);
	
	std::cout << "Area = "<<a <<"\n";
	std::cout << "Perimeter = "<<p<<"\n";
	
	
	return 0;
}
