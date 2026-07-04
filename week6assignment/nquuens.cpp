 bool noAttack(int row , int column ,vector<string> &ds, int n ){
    int r = row; int c = column;
    while(c){
        if(ds[r][--c] == 'Q') return false;  
    }
    r = row; c = column;
    while(c && r){
        if(ds[--r][--c] == 'Q')  return false;
    }
    r = row; c = column;
    while(c && r!=n-1){
        if(ds[++r][--c] == 'Q' ) return false ;
    }
    return true;
  }



   void possiblecombination(int ind , vector<vector<string>> &ans , vector<string> &ds , int n){
    if(ind==n){
        ans.push_back(ds);
        return ;
    }
    for(int i = 0; i<n ; i++){
        if(!noAttack(i,ind,ds,n)) continue;
        ds[i][ind] = 'Q';
        possiblecombination(ind+1,ans,ds,n);
        ds[i][ind] ='.';
    }
   }
   



    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> ds;
        for(int i = 0 ;i<n ; i++) ds.push_back(s);
        
        
        possiblecombination(0,ans,ds,n);
        return ans ;
    }
};