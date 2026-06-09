#include<bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int>& gain) {
        int sum =0 , maxsum = 0;
        for(int i = 0; i<gain.size() ; i++){
            sum += gain[i];
            maxsum = max(maxsum,sum);
        }
        return maxsum;
    }