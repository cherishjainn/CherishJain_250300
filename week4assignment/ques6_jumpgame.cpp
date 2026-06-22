 #include<bits/stdc++.h>
using namespace std;


 bool canJump(vector<int>& nums) {
        int maxindex =0;
        for(int i =0; i<nums.size() ; i++){
            if(i<=maxindex){
                maxindex = max(maxindex,nums[i] + i);
            }
            else return false;
        }
        return true ;
    }