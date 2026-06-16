#include<bits/stdc++.h>
using namespace std;

vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> prefix(arr.size(),0);
        int xorr = 0 ;
        for(int i = 0; i<arr.size() ; i++){
            xorr = xorr^arr[i];
            prefix[i] = xorr;
        }
        for(int i = 0; i<queries.size() ;i++){
            int strt = queries[i][0];
            int end = queries[i][1];
            xorr = prefix[strt]^prefix[end]^arr[strt];
            ans.push_back(xorr);
        }
        return ans ;
    }