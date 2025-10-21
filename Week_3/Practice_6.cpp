#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
	srand(time(0));
	int num1 = rand()% 10;
	int num2 = rand()% 10;
	if (num1 < num2 )
	{
		int temp = num1;
		num1 = num2;
		num2 =temp;
	}
	int value_resp;
	int actual_ans = num1 - num2;
	cout << "What is the value of " << num1 <<"-" << num2<< endl;
	cin >> value_resp;
	if(value_resp == actual_ans){
		cout << "Your answer is correct!";
	}else {
		cout << "Your answer is NOT correct!";
	return 0;
	}
	}