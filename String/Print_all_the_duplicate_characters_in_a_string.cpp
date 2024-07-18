#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    vector<char>v;
    for(int i=0;i<s.length();i++) mp[s[i]]++;
    for(auto x:mp){
        char key=x.first;
        int value=x.second;
        if(value>1) v.push_back(key);
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
