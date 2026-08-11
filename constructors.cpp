#include <bits/stdc++.h>
using namespace std;

// class Complex
// {
// public:
//     int a, b;

//     Complex(int x, int y)
//     {
//         a = x;
//         b=y;
        
//     }

//     Complex(int x)
//     {
//         a = x;
//     }

//     void printNumber()
//     {
//         cout << "Your number is: " << a << " + " << b << "i" << endl;
//     }
// };

// int main()
// {

//     Complex c1(4,2);
//     c1.printNumber();

//     Complex c2(5);
//     c2.printNumber();

//     return 0;
// }

// class Simple{

//     int data1, data2;
//     public:
//     Simple(int a, int b=9){
//         data1=a;
//         data2=b;
        

//     }

//     void displayNumber(){
//         cout<<"The values of data1 and data2 are: "<<data1<< " and "<<data2<<endl;

//     }



// };

// int main(){

//     Simple s(1,6);
//     s.displayNumber();

//     return 0;
// }


class bankDeposit{
    int principal, years;
    float interestRate;
    float returnValue;

    public:
    bankDeposit(){};
    bankDeposit(int p, int y, float r);
    bankDeposit(int p, int y, int r);
    void displayData()
    {
        cout << "The principal amount was " << principal
             << " after " << years
             << " years, it is " << returnValue << endl;
    }
};


bankDeposit::bankDeposit(int p, int y, float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;

    for(int i=0;i<y;i++){
        returnValue=returnValue * (1+r);
    }
}

bankDeposit::bankDeposit(int p, int y, int r){
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;

    for(int i=0;i<y;i++){
        returnValue=returnValue * (1+interestRate);
    }


};


int main(){
    int p,y, R;
    float r;
    cout<<"Enter the value of p, y and r: ";
    cin>>p>>y>>r;

    bankDeposit B1(p,y,r);
    B1.displayData();



cout<<"Enter the value of p, y and R: ";
    cin>>p>>y>>R;

    bankDeposit B2(p,y,R);
    B2.displayData();




    return 0;
}
