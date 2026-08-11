//even or odd

#include<iostream>
using namespace std;


// int main(){
// for(int i=1;i<=100;i++){

//     cout<<"enter your number: ";
//     cin>>i;
//     if(i%2==0){
//         cout<<" it is an even number. "<<endl;
//     }
//     else{
//         cout<<"it is an odd number."<<endl;
//     }
//     break;

// }

// return 0;

// }


//Factorial of a number.
// int main(){
// int n;

// int factorial=1;

// while(n>0){
  
//     factorial=factorial*n;
//     n--;

// }

// cout<<"the factorial of 5 is "<<factorial<<endl;


// return 0;

// }

class factorial{
public:
    int n;
    int factorial=1;

    void setData(){
        cout<<"enter your number: ";
        cin>>n;
    }

    void calculateFactorial(){
        int temp=n;
        
        while(temp>0){

            factorial=factorial*temp;
            temp--;
        }
    }

    void displayData(){
        cout<<"the factorial of "<<n<<"is "<<factorial<<endl;
    }
};

int main(){
    factorial obj;
    obj.setData();
    obj.calculateFactorial();
    obj.displayData();

    return 0;
}