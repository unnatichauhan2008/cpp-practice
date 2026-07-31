#include<iostream>
using namespace std;

int main(){

float rate, simpleinterest;
int principal,time;
cout<<"The principal amount is:";
cin>>principal;

cout<<"The time period is:";
cin>>time;

cout<<"The rate of interest is:";
cin>>rate;

 simpleinterest= (rate*principal*time) / 100;
cout<<"The simpleinterest is: "<<simpleinterest;

return 0;


}