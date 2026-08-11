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
cout<<"enter the value: ";
cin>>p;
cout<<"The fibonacci series of the term at position: " <<p<<" is "<<fib(p);

return 0;
}



