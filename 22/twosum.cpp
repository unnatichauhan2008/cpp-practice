// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }
//     int val;
//     cin>>val;
//     cout<<val<<" appears "<<hash[val]<<" times "<<endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }

//     int max_freq=0;
//     int max_element=0;

//     for(auto it:mp){
//         if(it.second>max_freq){
//             max_freq=it.second;
//             max_element=it.first;
//         }
//     }
//     cout<<"most frequent element: "<<max_element<<endl;
//     cout<<"frequency: "<<max_freq<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }

//     int min_freq=INT_MAX;
//     int min_element=0;

//     for(auto it:mp){
//         if(it.second<min_freq){
//             min_freq=it.second;
//             min_element=it.first;
//         }
//     }
//     cout<<"least frequent element: "<<min_element<<endl;
//     cout<<"frequency: "<<min_freq<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// string s;
// cin>>s;

// int hash[26]={0};
// for(int i=0;i<s.size();i++){
//     hash[s[i]-'a']++;
// }

// for(int i=0;i<26;i++){
//     if(hash[i]>0){
//         cout<<char('a'+i)<<" appears "<<hash[i]<<endl;
//     }

// }

// }

#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
        cin>>n;


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cin>>target;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
    int needed=target-arr[i];
            if(st.find(needed)!=st.end()){
                cout<<"numbers required are: "<<needed<<" and "<<arr[i]<<endl;
            
return 0;
 }
st.insert(arr[i]);
}
cout<<"no pair found! "<<endl;
return 0;
 }