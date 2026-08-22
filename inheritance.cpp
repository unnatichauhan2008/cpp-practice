#include<bits/stdc++.h>
using namespace std;

class Student{
protected:
int roll_no;
public:
void setRolllno(int r){
    roll_no=r;
}
void getRollno (){
    cout<<"The roll no is: "<<roll_no<<endl;
}

};

class Exam:public Student{
    protected:
    float maths;
    float physics;
    public:
    void setMarks(float m1,float m2){
        physics=m1;
        maths=m2;
    }
    void getMarks(){
        cout<<"The marks in maths are: "<<maths<<endl;
        cout<<"The marks in maths are: "<<physics<<endl;
        
}
};

class Result:public Exam{
    float percentage;
    public:
    void display(){
        cout<<"The result percentage is: "<<(physics+maths)/2<<endl;
    }
};

int main(){
    Result r;
    r.setRolllno(7);
    r.getRollno();
    r.setMarks(98,99.3);
    r.getMarks();
    r.display();
}