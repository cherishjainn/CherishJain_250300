#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
        int prev =  101;
        for(int i =0 ; i<n ; i++){
             if(nums[i] != prev) {
                nums[k++] = nums[i];
             }
             prev = nums[i]; 
        }
        return k;
    }