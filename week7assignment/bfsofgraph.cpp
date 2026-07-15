vector<int> bfs(vector<vector<int>> &adj) {
        // code her
        int v = adj.size();
        vector<int> ans;
        vector<int> visit(v,0);
        queue<int> q;
        q.push(0);
        visit[0] = 1;
        while(!q.empty()){
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for(auto it : adj[node]){
                if(!visit[it]){
                    visit[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }