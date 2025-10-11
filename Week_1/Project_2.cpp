#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // USER INPUTS TWO NUMBERS
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // SWAPPING OF THE VALUES WITH A TEMPORARY VARIABLE
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
