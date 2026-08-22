#include <bits/stdc++.h>
using namespace std;

int main()
{
    //---->*NUMBER HASHING*
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int hash[13]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }
    // for(int i=0;i<13;i++){
    //     if(hash[i]>0){
    //         cout<<i<<" appears "<<hash[i]<<" times. "<<endl;
    //     }
    // }

    //---->*CHARACTER HASHING*
    // string s;
    // cin >> s;

    // int hash[26] = {0};//--->use 256 if both uppercase and lowercase are used.
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i] - 'a']++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (hash[i] > 0)
    //     {
    //         cout << char('a' + i) << ": " << hash[i] << endl;
    //     }
    // }

//--->using maps.(use unordered as they utilise less memory.)
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// map<int,int>mp;
// for(int i=0;i<n;i++){
// mp[arr[i]]++;
// }
// for(auto it : mp){----->range-based.
//     cout << it.first << " appears " << it.second << endl;
// }


string s;
cin>>s;
map<char,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]-'a']++;
}

for(auto it:mp){
    cout<<char('a' + it.first)<< " appears "<<it.second<<endl;
}


         return 0;
 }

