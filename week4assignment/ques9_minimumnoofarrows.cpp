#include<bits/stdc++.h>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int count = 1;
        vector<int> prev = points[0];
        for(int i = 1; i<points.size() ; i++){
        int prevstrt = prev[0];
        int prevend = prev[1];
        int currstrt = points[i][0];
        int currend = points[i][1];
        if(currstrt>prevend){
            count++;
            prev = points[i];
        }
        else{
            prev = {currstrt , min(currend,prevend)};
        }
        }
        return count ;
    }