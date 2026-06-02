#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
      int n = nums.size();
      int oldsum = n*(n+1)/2;
      int newsum = 0 ;
      for(int i =0; i<n ; i++){
        newsum += nums[i];
      }  
      return oldsum-newsum;
    }