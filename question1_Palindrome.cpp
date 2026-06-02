#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        if(x<0) return false ;
        int target = x;
        long long  reverse=0;
        while(x>0){
            reverse = reverse*10 + x%10;
            x=x/10;
        }
        if(reverse != target) return false  ;
        return true;
    }


