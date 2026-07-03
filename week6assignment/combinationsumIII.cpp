void findcombo(int ind ,  int target , vector<vector<int>> &ans , vector<int> &ds , int k){
        if(target == 0 && ds.size() == k){
            ans.push_back(ds);
            return ;
        }
        for(int i = ind ; i<=9 ;i++){
            if(i>target || ds.size()>=k)break;
            ds.push_back(i);
            findcombo(i+1,target-i,ans,ds,k);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombo(1,n,ans,ds,k);
        return ans ;
    }