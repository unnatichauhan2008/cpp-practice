#include<iostream>
using namespace std;

float moneyrecieved(int currentmoney, float rate=1.05){

    return currentmoney*rate;
}
int main(){
int money;
cout<<"Enter the amount of currency:";
cin>>money;
cout<<"If you have"<<money<<" in your pocket then you would recieve: "<<moneyrecieved(money)<<" after 1 year.";


return 0;



}