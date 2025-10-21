#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double Radius;
	cout << "What is the radius?" <<endl;
	cin >> Radius;
	
	double Area = Radius * Radius * 3.14159;
	cout << "The area is:" << endl;
	cout << Area;
}