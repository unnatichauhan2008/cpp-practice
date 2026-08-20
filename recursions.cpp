// #include<bits/stdc++.h>
// using namespace std;
// class recursion{
//     public:
// void fun(int n){//--->high memory usuage.
//     if(n==0)
//     return;
//     cout<<n<<endl;
//     fun(n-1);
// }
// };

// int main(){
//     recursion r;
//     r.fun(5);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Recursive function to print name count times
//     void printName(string name, int count=0, int N) {
//         // Base case: if count equals N, stop recursion
//         if (count == N)
//             return;

//         // Print the name
//         cout << name << "\n";

//         // Recursive call with incremented count
//         printName(name, count + 1, N);
//     }
// };

// int main() {
//     Solution sol;
//     sol.printName("Ashish", 5);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Recursive function to print numbers from current to n
//     void printNumbers(int current, int n) {
//         // Base case: if current exceeds n, stop recursion
//         if (current > n)
//             return;

//         // Print current number
//         cout << current << " ";

//         // Recursive call with next number
//         printNumbers(current + 1, n);
//     }
// };

// int main() {
//     Solution sol;
//     int n = 10;

//     sol.printNumbers(1, n);
//     cout << "\n";

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print numbers from current to n using backtracking
    void printNumbers(int current, int n) {
        // Base case: if current exceeds n, stop recursion
        if (current > n)
            return;

        // Recursive call with next number
        printNumbers(current + 1, n);

        // Print current number during backtracking
        cout << current << " ";
    }
};

int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(1, n);
    cout << "\n";

    return 0;
}
