#include<iostream>
using namespace std;

int main() {
	float celsius, fahreneit;
	cout << "Enter the value in celsius: ";
	cin >> celsius;

	fahreneit = (celsius * 9 / 5) + 32;
	cout << "The value in fahreneit is: " << fahreneit;
	cin >> fahreneit;

	return 0;

}