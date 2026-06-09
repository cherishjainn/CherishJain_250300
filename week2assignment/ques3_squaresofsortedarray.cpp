#include<bits/stdc++.h>
using namespace std;


vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size()) ;
        int left = 0;
        int right = nums.size() -1;
        int i =nums.size()-1;
        while(left<=right && i>=0){
            if(abs(nums[left]) < abs(nums[right])){
                   ans[i--] = nums[right]*nums[right];
                   right--;
            }
            else {
                    ans[i--] = nums[left]*nums[left];
                    left++;
            }
        }
        return ans;
    }