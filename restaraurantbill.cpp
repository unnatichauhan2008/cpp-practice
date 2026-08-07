#include<iostream>
#include<string>
using namespace std;

class customer

{
    private:
    int total_bill;
    string customer_name;
    int table_no;
    int quantity;
    int choice;
    

    public:
    void readData()

    {
        cout<<"Enter the name of the customer: ";
        cin>> customer_name;

        cout<<"Enter the table no.: ";
        cin>> table_no;

        


    }

    void showMenu()
    
    {

        cout<<"\n-----------------------MENU-----------------------------\n";
        cout<<"burger:            Rs.200 "<<endl;
        cout<<"pizza:             Rs.500 "<<endl;
        cout<<"coke:              Rs.80  "<<endl;
        cout<<"coffee:            Rs.120 "<<endl;


    }
    
    void calculateBill()

    {
       
        cout<<"Enter the choice: ";
        cin>>choice;
        
     
        cout<<"Enter the quantity: ";
        cin>>quantity;

        if(choice==1){
            total_bill=200*quantity;
        }
        else if(choice==2){
            total_bill=500*quantity;
        }
        else if(choice==3){
            total_bill=80*quantity;
        }
        else if(choice==4){
            total_bill=120*quantity;
        }

        cout<<endl;

        }

        
    

    
      

    void displayData(){
        cout<<"Name: "<<customer_name<<endl;
        cout<<"Table no: "<<table_no<<endl;
        cout<<endl;
        cout<<"Item no: "<<choice<<endl;
        cout<<"Quantity: " <<quantity<<endl;
        cout<<"Total bill: "<<total_bill<<endl;


    }
    };

    int main(){
customer a;
a.readData();
a.showMenu();
a.calculateBill();
a.displayData();


return 0;


    }
