#include <iostream>
#include <string>
using namespace std;

class bankaccount
{

private:
    float balance;
    string holder_name;
    int acc_number;

public:
    void createaccount()
    {
        cout << "Enter your name: ";
        cin >> holder_name;

        cout << "Enter your account number: ";
        cin >> acc_number;

        cout << "Enter your balance amount: ";
        cin >> balance;
    }

    void depositMoney()
    {
        float amount;
        cout << "Enter amount to deposit: " << endl;
        cin >> amount;
        balance = balance + amount;
        cout << "The new balance amount is: " << balance << endl;
    }


    void showBalance(){
        cout<<"The current balance is: "<<balance<<endl;
    }

    void withdrawMoney()
    {
        int withdraw;

        cout << "Enter amount to withdraw: ";
        cin >> withdraw;
       
        if (withdraw <= balance)
        {
             balance = balance - withdraw;
            cout << "Amount can be withdrawen." << endl;
            cout<<"Remaining Balance: "<<balance<<endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    
    void displayAccount()
    {

        cout << "\n----------ACCOUNT DETAILS---------\n";

        cout << "NAME: " << holder_name << endl;
        cout << "ACCOUNT NUMBER: " << acc_number << endl;
        cout << "BALANCE REMAINING: " << balance << endl;
    }
};

int main()
{
    bankaccount acc;
    acc.createaccount();
    acc.depositMoney();
    acc.showBalance();
    acc.withdrawMoney();
    acc.displayAccount();

    return 0;
}