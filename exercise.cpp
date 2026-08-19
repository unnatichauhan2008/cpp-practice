#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator{
    public:
    int x,y;

void setData(){
cout<<"Enter the value of x: ";
cin>>x;

cout<<endl;
cout<<"Enter the value of y: ";
cin>>y;
}
void displayData(){
    cout<<"The sum of two numbers is: "<<(x+y)<<endl;
    cout<<"The difference of two numbers is: "<<(x-y)<<endl;
    cout<<"The product of two numbers is: "<<(x*y)<<endl;
    cout<<"The division of two numbers is: "<<(x/y)<<endl;
}

};

class ScientificCalculator{
    public:
    int a,b;
    void setData1(){
        cout<<"Enter the value of a: ";
cin>>a;

cout<<endl;
cout<<"Enter the value of b: ";
cin>>b;
    }

    void displayData1(){
       cout<<"The max of two numbers is: "<<max(a,b)<<endl;
    cout<<"The remainder of two numbers is: "<<(a%b)<<endl;
    cout<<"The square root sum of two numbers is: "<<(sqrt(a)+sqrt(b))<<endl;
    cout<<"The power of two numbers is: "<<pow(a,b)<<endl;  
    }
};

class Derived:public SimpleCalculator, public ScientificCalculator{

};



int main(){

    Derived D;
    D.setData();
    D.displayData();


    D.setData1();
    D.displayData1();
   

    return 0;
}