#include <iostream>
using namespace std;

class employee
{
public:
    static int count;
};

int employee::count = 0;

int main()
{

    employee Aman;
    employee Rahul;

    employee::count++;

    cout << employee::count << endl;

    employee::count++;
    cout << employee::count << endl;
}

// class student{

// public:
// int age;

// void displayData(){
// cout<<" age is: "<<age<<endl;

//}

//};
// int main(){
// student Harsh;
// student Rahul;

// Harsh.age=18;
// Rahul.age=13;
// cout<<"Harsh's ";
// Harsh.displayData();

// cout<<"Rahul's ";
// Rahul.displayData();
