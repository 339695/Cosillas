#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ans;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        ans+=to_string(v[i]);
        if(i!=v.size()-1){
            ans+='+';
        }
    }
    cout<<ans;

    return 0;
}