#include <iostream>
#include <cstring>

using namespace std;

class Car {
public:
    char brand[50];
    char model[50];
    int yearManufactured;
};

int main() {
    Car car1;
    strcpy_s(car1.brand, "BMW");
    strcpy_s(car1.model, "X5");
    car1.yearManufactured = 1999;

    cout << "Brand: " << car1.brand << ", Model: " << car1.model << ", Year: " << car1.yearManufactured << endl;

    return 0;
}
