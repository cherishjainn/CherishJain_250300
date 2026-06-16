#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;
        for(int i=0; i<n;i++){
            xorr = xorr^nums[i]^i;
        }
        xorr = xorr^n;
        return xorr;
    }