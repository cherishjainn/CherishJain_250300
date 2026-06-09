 #include<bits/stdc++.h>
using namespace std;
 
 
 bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int   n = s.size();
        int alphacount[27] ;
        for(int i = 0 ; i<n ; i++){
            alphacount[s[i]-'a']++;
            alphacount[t[i]-'a']--;
        }
        for(auto i:alphacount){
            if(i!=0) return false ;
        }
        return true;

    }