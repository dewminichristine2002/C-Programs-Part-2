#include <iostream>
using namespace std;

class student
{
	private :
		int studentno;
		int marks1;
		int marks2;
		int marks3;
		
	public:
	 void setstudentno(int n);
	 void assignmarks(int m1, int m2, int m3);
	 float calcavg();

};

void student :: setstudentno(int n)
{
	studentno=n;
}

void student :: assignmarks(int m1, int m2,int m3)
{
	marks1=m1;
	marks2=m2;
	marks3=m3;
}

float student :: calcavg()
{
	return (marks1+marks2+marks3)/3.0;
}

int main(){
	
	student std1;
	
	std1.setstudentno(1001);
	std1.assignmarks(50,78,80);
	
	cout << "Average : "<< std1.calcavg()<< endl;
	
	return 0;
	
}

