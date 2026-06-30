 vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start =-1,end = -1;
        if(!n || target > nums[n-1]) return {start,end};
         start = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
         end   = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
         
         if(start == end) return {-1,-1};
          
           return {start,end-1};
       
        
        
    }