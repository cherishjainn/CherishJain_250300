#include<bits/stdc++.h>
using namespace std;


vector<int> sortedSquares(vector<int>& nums) {
       int left = 0 ;
       int right = nums.size() -1;
       vector<int> ans(nums.size()) ;
       int i = nums.size()-1;
       while(left<=right){
       int a = nums[left];
       int b = nums[right];
       if(abs(a) <= abs(b)){
        ans[i] = b*b;
        right--;
        i--;
       }
       else {
         ans[i] = a*a;
         left++;
         i--;
       }
    }
    return ans;
    }