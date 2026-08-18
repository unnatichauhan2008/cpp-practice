#include <bits/stdc++.h>
using namespace std;
class patterns
{
public:
    int N = 5;
    void pattern9()
    {

        for (int i = 1; i <= 2 * N - 1; i++)
        {

            int new_i = i;
            if (i > N)
                new_i = 2 * N - i;
            for (int j = 1; j <= new_i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    void pattern10()
    {
        int start = 1;
        for (int i = 1; i <= N; i++)
        {

            if (i % 2 == 0)
                start = 0;
            else
                start = 1;
            for (int j = 1; j <= i; j++)
            {
                cout << start << " ";
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
            {
                cout << j;
            }
            for (int j = 1; j <= 2 * (N - i); j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
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

            for (char c = 'A'; c < 'A' + i; c++)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    }
    void pattern14()
    {
        for (int i = 1; i <= N; i++)
        {
            for (char c = 'A'; c <= 'A' + (N - i); c++)
            {
                cout << c << " ";
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
            // spaces
            for (int j = 1; j <= N - i; j++)
            {
            }
        }
    }
    void pattern17()
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N - i-1; j++) //--->spaces
            {
                cout << " ";
            }
            char ch = 'A';
            int breakpoint = (2 * i + 1) / 2;
            for (int j = 1; j <= 2 * i + 1; j++)
            {
                cout << ch;
                if (j <= breakpoint)
                    ch++;
                else
                    ch--;
            }
            for (int j = 1; j <= N - i-1; j++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    patterns p9;
    p9.pattern17();
    return 0;
}