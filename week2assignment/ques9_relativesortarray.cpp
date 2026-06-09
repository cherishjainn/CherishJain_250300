#include<bits/stdc++.h>
using namespace std;


vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i = 0; i<arr1.size() ; i++){
            mpp[arr1[i]]++;
        }
        for(int i = 0; i<arr2.size() ; i++){
            while(mpp[arr2[i]]) {
                ans.push_back(arr2[i]);
                mpp[arr2[i]]--;
            }
        }
        for(auto it:mpp){
             while(it.second){
                ans.push_back(it.first);
                it.second--;
             }
        }
        return ans ;

    }