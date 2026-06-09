#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
         int n = nums.size();
         int sum =0;
         for(int i = n-1; i>=n-k ; i--){
             sum += nums[i];
         }
         int maxsum  = sum; 
         int right = n-1 ; int left = n-k;
         while(left>0){
            sum -= nums[right--];
            sum += nums[--left];
            maxsum = max(sum,maxsum);
         }
         return (double)maxsum/k;
    }