 int pairs(int spell , vector<int>& potions , long long success){
        int low = 0 ,  high = potions.size()-1;
        int ans = 0 ;
        while(low<=high){
            long long mid  = low + (high-low)/2;
            if(1LL*spell*potions[mid] >= success) {
                ans = potions.size()-mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
     }


    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(auto it:spells){
            ans.push_back(pairs(it,potions,success));
        }
        return ans ;
    }