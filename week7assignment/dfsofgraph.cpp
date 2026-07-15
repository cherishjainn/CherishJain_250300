void dfs(int node , vector<vector<int>>& adj , vector<int> &ans , vector<int> &visit){
       visit[node] = 1;
       ans.push_back(node);
       for(auto it: adj[node]){
           if(!visit[it]){
               dfs(it,adj,ans,visit);
           }
       }
   }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        vector<int> ans ;
        vector<int> visit(v);
        dfs(0,adj,ans,visit);
        return ans ;
    }