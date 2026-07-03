 void help(int index ,vector<int>& candidates, int target, vector<vector<int>>& ans,vector<int>& ds ){
    if(target == 0){
        ans.push_back(ds);
        return ;
    }
    if(target<0 || index == candidates.size()) return ;
    ds.push_back(candidates[index]);
    help(index,candidates,target-candidates[index],ans,ds);
    ds.pop_back();
    help(index+1,candidates,target,ans,ds);
   }




    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds ;
        help(0,candidates,target,ans,ds);
        return ans;
    }