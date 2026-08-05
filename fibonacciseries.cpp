#include<iostream>
using namespace std;

int fib(int n){
if (n<2){
    return 1;
}
return fib(n-2)+ fib(n-1);
}

int main(){
int p;
cout<<"enter a value: ";
cin>>p;

cout<<"the term in fibonacci sequence at position "<<p<<" is: "<<fib(p)<<endl; 
 return 0;
}



