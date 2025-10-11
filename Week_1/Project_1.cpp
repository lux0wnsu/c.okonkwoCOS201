#include <iostream>
using namespace std;

int main() {
    // ADD TWO NUMBERS OF CHOICE
    int num1, num2;

    // USER INPUTS FIRST NUMBER 
    cout << "Enter first number: ";
    cin >> num1;

    //USER INPUTS SECOND NUMBER 
	cout << "Enter second number: ";
    cin >> num2;

    // CALCULATE SUM, DIFFERENCE AND PRODUCT
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    // DISPLAY EACH RESULTS
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;

    return 0;
}
