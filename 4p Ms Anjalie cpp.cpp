#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	cout<< setw(12)<< 25.695789<< endl;
	cout<< setw(12) <<setprecision (3) << 25.695789<< endl;

	cout<< setw(12)<<setiosflags(ios::fixed) <<25.695789<< endl;
	
	cout<< setw(12) <<setprecision (3) << 25.695789<< endl;
	
	return 0;
}
