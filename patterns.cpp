#include <bits/stdc++.h>
using namespace std;

class patterns
{

public:
    int N = 5;
    void pattern1()
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    void pattern2()
    
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void pattern3()
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    void pattern4()
    {

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    void pattern5()
    {

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N - i + 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    void pattern6()
    {

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N - i + 1; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void pattern7()
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - i - 1; j++)
            {
                cout << "  "; //--->2 spaces.
            }
            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < N - i - 1; j++)
            {
                cout << "  ";
            }
            cout << endl;
        }
    }

    void pattern8()
    {

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "  "; //--->2 spaces.
            }
            for (int j = 0; j < 2 * N - 2 * i - 1; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            cout << endl;
        }
    }

    void pattern9()
    {
        for (int i = 1; i <= 2 * N - 1; i++)
        {                  //------>FOR CREATING ROWS
            int new_i = i; //--->ESTABLISHING NEW VARIABLE
            if (i > N)
                new_i = 2 * N - i;
            for (int j = 1; j <= new_i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    void pattern10()
    {
        int start = 1; //--->initializing number to start from 1.
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
                start = 0;
            else
                start = 1;
            for (int j = 1; j <= i; j++)
            {
                cout << start;
                start = 1 - start;
            }
            cout << endl;
        }
    }

    void pattern11()
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            { //---->FOR NUMBERS IN INCREASING ORDER.
                cout << j;
            }
            for (int j = 1; j <= 2 * (N - i); j++)
            {
                cout << " ";
            }
            for (int j = i; j >= 1; j--)
            { //---->FOR NUMBERS IN DECREASING ORDER.
                cout << j;
            }
            cout << endl;
        }
    }

    void pattern12()
    {
        int num = 1;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }

    void pattern13()
    {
        for (int i = 1; i <= N; i++)
        {
            for (char ch = 'A'; ch < 'A' + i; ch++)
            {
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    void pattern14()

    {
        for (int i = 1; i <= N; i++)
        {

            for (char ch = 'A'; ch <= 'A' + (N - i); ch++) //---->A is already being printed at every row.
            {

                cout << ch << " ";
            }
            cout << endl;
        }
    }

    void pattern15()
    {
        for (int i = 1; i <= N; i++)
        {
            char ch = 'A' + i - 1;
            for (int j = 1; j <= i; j++)
            {

                cout << ch << " ";
            }
            cout << endl;
        }
    }

    void pattern16()
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N - i+1; j++)
            {
                cout << " ";
            }
            char ch = 'A';
            int breakpoint = (2 * i + 1) / 2;
            for (int j = 1; j < 2 * i + 1; j++)
            {
                cout << ch;
                if (j <= breakpoint)
                    ch++;
                else
                    ch--;
            }
            for (int j = 1; j < N - i+1; j++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
};

    int main()
    {
        patterns p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16;

       
        p9.pattern9();
       
        return 0;
    }