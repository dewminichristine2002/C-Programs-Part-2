
#include <iostream>
using namespace std;

class rectangle
{
private:
int length;
int width;

public:
void setlength(int l);
void setwidth(int w);
int getlength();
int calarea();	
	
};

void rectangle::setlength(int l){
	length=l;
}
void rectangle::setwidth(int w){
	width=w;
}
int rectangle::getlength(){
	return length;
}

int rectangle::calarea(){
	 
    return length*width;
}

int main(){
	
	rectangle rec1;
	rectangle rec2;
	
	
	rec1.setlength(12);
	rec1.setwidth(10);
	
	cout << rec1.calarea()<<endl;
	
	cout <<"length of rec 1:"<<rec1.getlength();
	
	
	return 0;
	
}
