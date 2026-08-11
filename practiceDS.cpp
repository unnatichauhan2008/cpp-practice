


  #include <iostream>
// #include <vector>
 using namespace std;

// int main() {
  
//     // Initializing a 2-D vector with values
//     vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  
//   for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] <<" ";
//         }

//         cout << endl;
//     }


// //     string s1="Hello World";
// // string s2="Bye";
// // cout<<s1<<endl;
// // cout<<s2<<endl;

// return 0;
// }

class Solution {
public:
    void studentGrade() {
        int marks;
        char grade;

        cout<<"Enter your marks: ";
        cin>>marks;

       
        if(marks>=90){
            grade='A';
        }
              else if(marks>=70){
        
                grade='B';
             }
                  else if (marks>=50){
                    grade='C';
                 }
                      else if(marks>=35){
                        grade='D';
                    }
                    else{
                        cout<<"Fail";
                    }
                    cout<<"Grade is: "<<grade<<endl;
                }
        
    



    
};

int main(){
    Solution a;
    a.studentGrade();
    return 0;
}