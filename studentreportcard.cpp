#include<iostream>
using namespace std;

class Students
{
    public:
    string Name;
    int Roll_no;
    int studentclass;

    void readData()
    {

        cout<<"Enter student name: "<<endl;
        cin>>Name;

        cout<<"Enter Roll Number: "<<endl;
        cin>>Roll_no;

        cout<<"Enter your class: "<<endl;
        cin>>studentclass;

        cout<<endl;

        cout<<"ENTER YOUR MARKS IN 5 SUBJECTS: "<<endl;

        cout<<"English: "<<endl;
        cin>>marks[0];

        cout<<"Maths: "<<endl;
        cin>>marks[1];

        cout<<"Science: "<<endl;
        cin>>marks[2];

        cout<<"Social Science: "<<endl;
        cin>>marks[3];

        cout<<"Hindi: "<<endl;
        cin>>marks[4];


    }

    void calculatepercentage()
    {
        int total;
        total= marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
        percentage= total/5.0;

    if (percentage >=90)
    grade= 'A';
else if(percentage>=85)
grade= 'B';
else if(percentage>=65)
grade= 'C';
else if(percentage>=50)
grade= 'D';
else
grade= 'F';


    }

    void displayreport(){
        cout<<endl;
        cout<<"-----------REPORT CARD-----------"<<endl;
     cout<<"Name: "<<Name<<endl;
     cout<<"Roll Number: "<<Roll_no<<endl;
     cout<<"Class: "<<studentclass<<endl;

     cout<<endl;
     cout<<"---------------MARKS--------------"<<endl;
     cout<<"ENGLISH: "<<marks[0]<<endl;
     cout<<"MATHS: "<<marks[1]<<endl;
     cout<<"SCIENCE: "<<marks[2]<<endl;
     cout<<"SOCIAL SCIENCE: "<<marks[3]<<endl;
     cout<<"HINDI: "<<marks[4]<<endl;

     cout<<"Percentage:"<<percentage<<"%"<<endl;
     cout<<"Grade: "<<grade<<endl;
    }




    private:
    int marks[5];
    float percentage;
    char grade;

};

int main(){

Students Harsh;
Harsh.readData();
Harsh.calculatepercentage();
Harsh.displayreport();











    return 0;
}