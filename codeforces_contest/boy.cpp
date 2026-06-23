#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;

    int name[26] = {0};
    for(int i = 0 ; i<s.size() ;i++){
        name[s[i]-'a']++;
    }
    int distinctchar =0;
    for(auto it:name){
          if(it>0) distinctchar++;
    }
    if(distinctchar&1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    
    return 0;
}