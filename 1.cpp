#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
    void setData(int v1){
    
        a=v1;
        b=v1*v1;
    }

     int sumComplex(complex o1, complex o2){
        a=o1.a+o2.a;
        b=a*a;

    }


    int printNumber(){

        cout<<"Your complex number is: "<<a<<" +"<<b<<"i "<<endl;


    }

   

};


int main(){
    complex c1,c2,c3;
    c1.setData(2);
    c1.printNumber();

    c2.setData(3);
    c2.printNumber();


    c3.sumComplex(c1,c2);
    c3.printNumber();








    return 0;
}