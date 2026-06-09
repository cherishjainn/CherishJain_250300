#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp[0]++;
        int count = 0;
        int sum = 0;
        for(int i =0;i<nums.size() ; i++){
            sum+=nums[i];
            if(mpp.find(sum-k)!=mpp.end()) count += mpp[sum-k];
            mpp[sum]++;
           }
        return count;
    }