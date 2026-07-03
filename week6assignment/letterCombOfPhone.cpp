 void help(int idx , string digits , vector<string> &ans , string &ds , vector<string> &comb )
   {
    if(idx == digits.size()) {
        ans.push_back(ds);
        return ;
    }
    for(int i = 0 ; i<comb[digits[idx]-'0'].size() ; i++){
        ds += comb[digits[idx]-'0'][i] ;
        help(idx+1,digits,ans,ds,comb);
        ds.pop_back();
    }
   }



    vector<string> letterCombinations(string digits) {
        vector<string> comb = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
         vector<string> ans;
         string ds ;
         help(0,digits,ans,ds,comb);
         return ans ;
        }