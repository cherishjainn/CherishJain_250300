    void palindpart(int index , string s , vector<vector<string>> &ans ,  vector<string> &ds ){
        
        if(index == s.size()){
            ans.push_back(ds);
            return ;
        }

        for(int i = index ; i<s.size() ; i++){
            if(isPalindrome(s.substr(index,i-index+1))){
               ds.push_back(s.substr(index,i-index+1));
               palindpart(i+1,s,ans,ds);
               ds.pop_back();
            }
        }
    }

    bool isPalindrome(string subs){
        int start=0 ; int end = subs.size()-1;
        while(start<=end){
            if(subs[start++]!=subs[end--]) return false;
        }
        return true;
    }


    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        palindpart(0,s,ans,ds);
        return ans ;
        
    }
