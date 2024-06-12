
#include <iostream>
using namespace std;

int calavg (int mark1, int mark2);

struct studentdetails{
	int itnumber;
	int sub1;
	int sub2;
}student1,student2; 


int main (){
	int avg1, avg2;
	
	cout <<"ENTER STUDENT 1 IT  no: ";
	cin>> student1.itnumber;
	
	cout <<"ENTER STUDENT 1 SUBJECT 1 MARKS: ";
	cin>> student1.sub1;
	
	cout <<"ENTER STUDENT 1 SUBJECT 2 MARKS: ";
	cin>> student1.sub2;
	
	cout <<"ENTER STUDENT 2 IT  no: ";
	cin>> student2.itnumber;
	
	cout <<"ENTER STUDENT 2 SUBJECT 1 MARKS: ";
	cin>> student2.sub1;
	
	cout <<"ENTER STUDENT 2 SUBJECT 2 MARKS: ";
	cin>> student2.sub2;
	
	avg1= calavg (student1.sub1,student1.sub2);
	
		avg2= calavg (student2.sub1,student2.sub2);

	cout << "student 1 average = "<< avg1<<endl;
		cout << "student 2 average = "<< avg2<<endl;

	
	
	return 0;
}


int calavg (int mark1, int mark2){
	
	return (mark1+mark2)/2;
}

