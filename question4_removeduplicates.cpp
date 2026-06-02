 
 #include<bits/stdc++.h>
using namespace std;
 
 
 int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        unordered_map<int,int> mpp;
        for(int i = 0 ; i<n ; i++){
            if(mpp.find(nums[i]) != mpp.end()) {
                mpp[nums[i]]++;
            }
            else{
                mpp[nums[i]]++;
                nums[k++] = nums[i];
            }
       }
       int ind =k;
       for(auto i:mpp){
         while(i.second>1){
            nums[ind++] = i.first;
            i.second--; 
        }
       }
       return k;
    }