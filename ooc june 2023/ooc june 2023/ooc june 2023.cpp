#include <iostream>
using namespace std;

class Animal
{
protected:
	char name[20];
public:
	Animal();
	Animal(char tname[])
	{
		strcpy(name, tname);
	}
	virtual void speak() = 0;

	void song()
	{
		cout << name << " 's song" << endl;
		speak();
	}
};

	int main()
	{
		Animal a;

		a.song();

		return 0;
	}