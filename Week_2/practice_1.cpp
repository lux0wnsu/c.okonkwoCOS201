#include <iostream>
#include <cmath>  // for sqrt() function
using namespace std;

int main(){
	int num1, num2, hypotenuse;
	
	cout << "Enter Base of the Triangle: ";
	cin  >> num1;
	
	cout << "Enter Height of the Triangle: ";
	cin >> num2;
	
	hypotenuse = sqrt((num1 * num1) + (num2 * num2));
	
	cout << "The hypotenuse of the triangle is: " << hypotenuse << endl;
	
	return 0;

}