#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3, num4;
	cout << "Enter the value of num 1: ";
	cin >> num1;

	cout << "Enter the value of num 2: ";
	cin >> num2;
	
	cout << "Enter the value of num 3: ";
	cin >> num3;

	cout << "Enter the value of num 4:";
	cin >> num4;
	
	if (num1 > num2 && num1 > num3 && num1>num4) {
		cout << "num 1 is the greatest. ";

	}

	else if (num2 > num1 && num2 > num3 && num2>num4) {

		cout << "num 2 is the greatest. ";

	}

	else if(num3>num1 && num3>num2 && num3>num4) {
		cout << "num 3 is the greatest.";
	}

	else {
		cout << "num 4 is the greatest.";
	}

	return 0;






}