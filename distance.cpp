//DISTANCE BETWEEN TWO POINTS:

#include<bits/stdc++.h>
using namespace std;

class point
{


    int a, b;

    public:
    point(int x, int y){
       a=x;
       b=y;
    }
    

    void displayPoint()
    {

        cout << "Your point is: (" << a << " , " << b << " ) " << endl;
       
    }
    friend double distance(point p, point q);
};

   double distance(point p, point q)
    {
        return sqrt((q.a-p.a)*(q.a-p.a)+ (q.b-p.b)*(q.b-p.b));

    }




int main()
{

    point p(3,2);
    p.displayPoint();
    point q(5,6);
    q.displayPoint();

    cout<<"distance is: "<<distance(p,q)<<endl;
    

    return 0;
}