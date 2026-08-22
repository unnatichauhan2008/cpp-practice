// #include<bits/stdc++.h>
// using namespace std;

// class SimpleCalculator{
//     public:
//     int x,y;

// void setData(){
// cout<<"Enter the value of x: ";
// cin>>x;

// cout<<endl;
// cout<<"Enter the value of y: ";
// cin>>y;
// }
// void displayData(){
//     cout<<"The sum of two numbers is: "<<(x+y)<<endl;
//     cout<<"The difference of two numbers is: "<<(x-y)<<endl;
//     cout<<"The product of two numbers is: "<<(x*y)<<endl;
//     cout<<"The division of two numbers is: "<<(x/y)<<endl;
// }

// };

// class ScientificCalculator{
//     public:
//     int a,b;
//     void setData1(){
//         cout<<"Enter the value of a: ";
// cin>>a;

// cout<<endl;
// cout<<"Enter the value of b: ";
// cin>>b;
//     }

//     void displayData1(){
//        cout<<"The max of two numbers is: "<<max(a,b)<<endl;
//     cout<<"The remainder of two numbers is: "<<(a%b)<<endl;
//     cout<<"The square root sum of two numbers is: "<<(sqrt(a)+sqrt(b))<<endl;
//     cout<<"The power of two numbers is: "<<pow(a,b)<<endl;  
//     }
// };

// class Derived:public SimpleCalculator, public ScientificCalculator{
// //--->MULTIPLE INHERITANCE
// //--->PUBLIC MODE OF INHERITANCE
// };



// int main(){

//     Derived D;
//     D.setData();
//     D.displayData();


//     D.setData1();
//     D.displayData1();
   

//     return 0;
// }

//--->WITHOUT RECURSIONS

// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// public:

// int printSum(int N){
//     int sum=0;
//     for(int i=1;i<=N;i++){
// sum+=i;
//     }
//     return sum;

// }
// };

// int main(){
//     Solution obj;
//     int N;
//     cin>>N;

//     int result=obj.printSum(N);
//     cout<<"result is: "<<result<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int printSum(int N){
//     return N*(N+1)/2;

    
// }

// int main(){
//     int N;
//     cin>>N;

//     int result=printSum(N);

//     cout<<"result is: "<<result<<endl;

//     return 0;
// }


//--->WITH RECURSIONS
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int sumOfNaturalNumbers(int N) {
//         if (N == 1) {
//             return 1;
//         }
//         return N + sumOfNaturalNumbers(N - 1);
//     }
// };

// int main() {
//     Solution obj;
//     int N;
//     cin >> N;
//     cout << obj.sumOfNaturalNumbers(N) << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;




// //--->WITHOUT RECURSIONS




// int Factorial(int N){
//     int factorial=1;
//     for(int i=1;i<=N;i++){
//         factorial=i*factorial;
//     }
    
//     return factorial;
// }

// int main(){
//     int N;
//     cin>>N;
//     int result=Factorial(N);
//     cout<<"result is: "<<result<<endl;
//     return 0;


// }


//--->WITH RECURSIONS


// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int N){
//     if(N==0)
//     return 1;
//     return N*factorial(N-1);

// }

// int main(){
//     int N;
//     cin>>N;
//     cout<<factorial(N);
//     return 0;
// }

//---->FACTORIAL:
#include <iostream>
 using namespace std;

 int main() {
     int n=5;
    
    int factorial = 1;

    while (n > 0) {//--->run this until this condition is true.
        factorial =factorial* n;  
        n--;
    }

   cout << "Factorial of 5 is: " << factorial << endl;  //Print the factorial

   return 0;
 }
