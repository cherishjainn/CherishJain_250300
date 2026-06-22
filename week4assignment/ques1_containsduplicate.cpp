#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            if(mpp[it]>0) return true;
            mpp[it]++;
        }
        return false;
    }