#include<iostream>
using namespace std;



 int sum(int n){

    if (n==1){
   return 1;
    }

else{

   return n+ sum(n-1);
}

 }
 int main(){
    int n=5;
 cout<<sum(n);

   return 0;
 }

//  int fact(int n){

// if (n==1)
//     return 1;

//    return n*fact(n-1);
// }



// int main(){
//     cout<<"factorial is: "<<fact(3);

//     return 0;

//  }
//  int fib(int n){
//    if(n==0)
//     return 0;

//    if (n==1||n==2)
//     return 1;
//      else
//      return (fib(n-1)+fib(n-2));
//  }

// int main(){

//   int n=5;
//    cout<<"Fibbonaci series of 5 is: ";
     
//     for(int i=0;i<n;i++){
//         cout<<fib(i)<<endl;
//     }
//     return 0;

// }


// checking odd or even:


// int even(int n){

 //     int rem=n%2;

 //     if(rem==0)
// //     return true;

// //     else
// //     return false;
// // }

// // int main(){

// //     int n=19;
// //     if(even(n)){
// //         cout<<"true";
// //     }
// //     else{
// //         cout<<"false";
// //     }

// //     return 0;
// // }