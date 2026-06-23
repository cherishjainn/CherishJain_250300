#include<bits/stdc++.h>
using namespace std;


int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> &val1 , vector<int> &val2){
            return val1[1]<val2[1];
            }
            );
        int count = 0; int timegone = intervals[0][1];
        for(int i = 1; i<intervals.size() ;i++){
            if(intervals[i][0]<timegone) count++;
            else timegone = intervals[i][1];
        }
        return count;
    }