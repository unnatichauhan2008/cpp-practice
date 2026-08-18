#include<bits/stdc++.h>
using namespace std;


// unordered_set<int> s={1,2,4,5,19};
// int n=2;
// if(s.find(2)!=s.end())
// cout<<n<<" is present in the set."<<endl;
// s.erase(s.begin());
// cout<<" Elements after deleting the first element:  ";
// for(auto it =s.begin();it!=s.end();it++){
// cout<<*it<<" ";
// }
// s.emplace(3);
// for(auto it =s.begin();it!=s.end();it++){
// cout<<*it<<" ";
// cout<<endl;

// cout<<"the size of the set is: "<<s.size();

// }
// }
// vector <int> v; 
// for(int i=1;i<=10;i++){
//     v.push_back(i);
// }
// cout<<"the elements in the set are: ";
// for(auto it=v.begin();it!=v.end();it++){
//     cout<<*it<<" ";
// }
// cout << "\nThe front element of the vector: " << v.front();  
//   cout << "\nThe last element of the vector: " << v.back();
//   cout << "\nThe size of the vector: " << v.size();  
//   cout<<"\ndeleting element from the end: "<<v[v.size()-1];
//   v.pop_back();
//   cout << "\nPrinting the vector after removing the last element:" << endl;
//   for (int i = 0; i < v.size(); i++)
//     cout << v[i] << " ";
// class explainvectors{
// public:
//  void vectors(){
// // vector<int> v(5,100);
// //     v.insert(v.begin()+1,2,10);

// // for(auto it=v.begin();it!=v.end();it++){
// //     cout<<*it<<" ";


   
// // }

// int main(){
// vector<int> v1={2,3}, v2={7,8};
// v1.swap(v2);
// cout << "v1: ";
//         for(auto it = v1.begin(); it != v1.end(); it++) {
//             cout << *it << " ";
//         }

//         cout << endl;

//         cout << "v2: ";
//         for(auto it = v2.begin(); it != v2.end(); it++) {
//             cout << *it << " ";
//         }
//     }

// };
//  int main(){
//     explainvectors v;
//     v.vectors();
//  }

// int main(){

//     list<int> l={1,2,3};
//    l.push_front(4);------>emplace back and push front are almost same only.
//     for(auto it = l.begin(); it != l.end(); it++) {
//            cout << *it << " ";
//        }


// return 0;

// }
// int main(){

//     stack<int> st;//----LAST IN FIRST OUT
//     st.push(1);//{1}
//     st.push(2);//{2,1}
//     st.push(3);//{3,2,1}
//     st.emplace(5);//{5,3,2,1}----->USUALLY EMPLACE PLACES THE TERM AT THE END OF THE VECTOR SET.
// cout<<st.top();
// cout<<st.size();
// cout<<st.empty();
// }


//---->priority queue<int>pq is diffferent than *stack* just by the fact that it displays the largest term first even if you enter it at the last.
//---->for showing the minimum number first, use this syntax:
// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(2);//--{2}
//    pq.push(3);//---{2,3}
//   pq.push(9);//---{2,3,9}
//   pq.emplace(5);//-->{2,3,5,9}
//   cout<<pq.top();//--->{2}
// }

// int main(){

//     queue<int> q;//------->FIRST IN FIRST OUT
//     q.push(1);//--{1}
//     q.push(2);//---{1,2}
//     q.push(9);//---{1,2,9}
//     q.emplace(5);//---{1,2,9,5}

//     q.front()+=5;//--->adds 5 to the first term.

//     cout<<q.front();//----->it doesn't follow top.

//     return 0;
// }

// int main(){
//     map<int,int>mpp={{1,2},{7,8},{3,4}};

//     auto it=mpp.find(7);
//     if(it!=mpp.end()){
//     cout<<(*it).second;

// }
// }
//     if( it!=st.end()){
//         cout<<*it;
//     }
//         else
//             cout<<"not found"<<endl;
        
//             int cnt=st.count(4);
//             cout<<st.count(4);
    
//     return 0;

//     }
// int main(){
//     multiset<int>ms={2,2,2,2};
//     ms.erase(ms.find(1));
//         cout<<ms.size();
    
    
    
//     return 0;
//

//--->ARRAYS
// int main(){
// int arr[]={2,1,7,4};
// sort(arr+2,arr+4);
// for(int i=0;i<4;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// sort(arr,arr+4,greater<int>());
// for(int i=0;i<4;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }


//--->VECTORS
// int main(){
//     vector<int>v={2,1,7,5,3};
//     sort(v.begin(),v.end(),greater<int>());
//     for(auto it=v.begin();it!=v.end();it++){
//         cout<<*it<<" ";
//     }
//     return 0;
// }

// bool comp(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) 
//     return true;
//     if(p1.second>p2.second)
//     return false;
//     if(p1.first>p2.first)
//     return true;
//     return false;
// }
// int main(){
//     vector<pair<int,int>> v={{3,6},{7,4}};
//     sort(v.begin(),v.end(),comp);
//     for(auto it=v.begin();it!=v.end();it++){
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//     }
// }
// int main(){
// int num=6;
// long long num=787542169;
// int cnt=__builtin_popcountll(num);

// cout<<cnt;
// }

int main(){
    string s="123";
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
    return 0;
    }
