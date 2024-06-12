
#include "rectangle.h"

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
