 void bfs(int row , int column , vector<vector<char>> &grid , vector<vector<int>> &visit){
           queue<pair<int,int>> q;
           q.push({row,column});
           int m = grid.size();
           int n = grid[0].size();
           visit[row][column] = 1 ;
           vector<pair<int,int>>  dir = {{1,0} , {0,1} , {-1,0} ,{0,-1}};
           while(!q.empty()){
                int currrow = q.front().first;
                int currcol = q.front().second;
                q.pop();
                for(const auto& [x,y] : dir){
                    int newrow = currrow  + x;
                    int newcol = currcol + y;
                    if(newrow>=0 && newrow < m && newcol >=0 && newcol < n && grid[newrow][newcol] == '1' && !visit[newrow][newcol]){
                        visit[newrow][newcol] = 1;
                        q.push({newrow,newcol});
                    }
                }
                }
           }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        vector<vector<int>> visit(m,vector<int>(n,0));
        for(int i = 0 ; i<m ; i++){
            for(int j =  0 ; j<n ; j++){
                if(grid[i][j]=='1' && !visit[i][j]){
                    count++;
                    bfs(i,j,grid,visit);
                }
            }
        }
        return count ;
    }