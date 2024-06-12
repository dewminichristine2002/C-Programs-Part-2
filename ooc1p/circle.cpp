#include <iostream>
#include "circle.h" 
using namespace std;

float circle::calcarea()
{
	return 3.14*radius*radius;
}

void circle::setradius (float x)
{
	radius=x;
}
