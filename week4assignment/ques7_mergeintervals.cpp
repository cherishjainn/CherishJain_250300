#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> arr;
        vector<int> pnt;
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        for(int i=0 ; i<n ; i ++){
              pnt = intervals[i];
              if( i == 0 ){
                arr.push_back(intervals[0]);
                continue ;
              }
              if(pnt[0] <= arr.back()[1]){
                arr.back()[1] = max(pnt[1] , arr.back()[1]); 
              }
              else arr.push_back(pnt);
        }
       return arr; 
    }