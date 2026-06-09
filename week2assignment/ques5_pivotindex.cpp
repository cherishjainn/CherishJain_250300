#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin() , nums.end() , 0);
        int leftsum = 0 ; int rightsum = sum;
        for(int i = 0 ; i<nums.size() ; i++){
            rightsum -= nums[i];
            if(leftsum == rightsum) return i;
            leftsum += nums[i];
            }
      return -1;
    }