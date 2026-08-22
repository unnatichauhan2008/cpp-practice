#include<bits/stdc++.h>
using namespace std;

// int factorial(int n){
//     if(n==0)
//     return 1;
//     return n*factorial(n-1);
// }

 class Solution{
    public:
    int reversedigit(int n){
        int rev=0;
        while(n>0){
            int lastdigit=n%10;
            rev=rev*10+lastdigit;
            n=n/10;
        }
        return rev;
    }
    // void reversearray(vector<int>&arr){
    //     reverse(arr.begin(),arr.end());

    // }
    // int sumofnaturalnumbers(int n){
    //     if(n==1)
    //     return 1;
    // return n+sumofnaturalnumbers(n-1);
    // }
    // void printNumber( int n,int current=1){
    //     if(current>n)
    //     return;
    //     cout<<current<<endl;

    //     printNumber(n,current+1);
    // }
// void printNumber(int N){
//     if(N==0)
//     return;
//     cout<<N<<endl;
//     printNumber(N-1);
// }
 };

// void printName(string name, int N, int count=0){
//     if (count==N)
//     return;
//     cout<<name<<endl;
//     printName(name,N,count+1);
// }
// };

 int main(){
    vector<int>arr={1,2,3,4,5};
    // int n;
    // cin>>n;
    // cout<<factorial(n);
 Solution sol;
 int result=sol.reversedigit(1234);
 cout<<"reversed digit is: "<<result<<" ";
//  sol.reversearray(arr);
//  for(int num:arr){
//     cout<<num<<" ";
//  }
//  int result=sol.sumofnaturalnumbers(10);
//  cout<<"Sum of numbers is: "<<result<<endl;
//  sol.printNumber(10);
//     sol.printName("Alex", 10);
// sol.printNumber(10);

    return 0;
 }

