#include <iostream>
using namespace std;

int main() {
    double radius, area;
    const double PI = 3.14159;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = radius * radius * PI;

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
