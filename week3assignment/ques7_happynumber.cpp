#include<bits/stdc++.h>
using namespace std;

int squareNumb(int n){
        int x = 0;
        while(n){
            x = x+ (n%10)*(n%10);
            n = n/10;
        }
        return x;
    }
 
    bool isHappy(int n) {
        unordered_map<int,int> mpp;
        while(n!=1){
               n = squareNumb(n);
               if(mpp.find(n)!=mpp.end()) return false;
               mpp[n]=1;
        }
        return true;
    }