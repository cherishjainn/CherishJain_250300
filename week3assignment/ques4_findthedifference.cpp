 #include<bits/stdc++.h>
using namespace std;

 
 char findTheDifference(string s, string t) {
        int diff=0;
        for(int i = 0; i<s.size() ; i++){
            diff += t[i]-s[i];
        }
        diff += t[t.size()-1];
        return diff;
    }