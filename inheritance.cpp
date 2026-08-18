#include<iostream>
using namespace std;

// class Employee{
// public:
// int id;
// float salary;
// Employee(int inpID){
//     id=inpID;
//     salary=34;
// }
// Employee(){}
// };

// class Programmer: public Employee{
//     public:
//     Programmer(int inpID){
//         id=inpID;
//     }
    
//     int languagecode=9;
   
// };

// int main(){
//     Employee e1(1);
//     cout<<e1.salary<<endl;
//     cout<<e1.id<<endl;
//     Programmer s(10);
//     cout<<s.languagecode<<endl;
//     cout<<s.id<<endl;
//     return 0;

// }

class base{
int data1;
public:
int data2;
void setData();
int getData1();
int getData2();
};

void base::setData(){
    data1=10;
    data2=20;
}
int base::getData1(){//--->we have created a new function that returns whatever value is stored under data1.
    return data1;
}

int base::getData2(){
    return data2;
}

class Derived: public base{
    public:
    int data3;
    void process();
    void display();
};
void Derived::process(){
    data3=data2*getData1();
}

void Derived ::display(){
    cout<<"value of data 1 is: "<<getData1()<<endl;//--->we can't just access data 1 like that, because it's private.
    cout<<"value of data 2 is: "<<data2<<endl;
    cout<<"value of data 3 is: "<<data3<<endl;
}

int main(){
    Derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}