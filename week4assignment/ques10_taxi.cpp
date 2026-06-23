#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> grps(n);

    for(int i = 0; i < n; i++){
        cin >> grps[i];
    }

    sort(grps.begin(), grps.end());

    int l = 0, r = n - 1;
    int taxi = 0;

    while(l <= r){

        int rem = 4 - grps[r];
        r--;

        while(l <= r && grps[l] <= rem){
            rem -= grps[l];
            l++;
        }

        taxi++;
    }

    cout << taxi;
}