#include <iostream>
#include <cmath>  // for sqrt() function
using namespace std;

int main() {
    double Balance, InterestRate, NewBalance;

    cout << "Enter Your Account Balance: ";
    cin >> Balance;

    cout << "Enter The Annual Interest Rate (in %): ";
    cin >> InterestRate;

    NewBalance = Balance + (Balance * InterestRate / 100);

    cout << "Your Balance after one Year is: " << NewBalance << endl;
    return 0;
}
