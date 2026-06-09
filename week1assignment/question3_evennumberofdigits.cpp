#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
        int count = 0 ;
      for(int i =0 ; i<nums.size() ; i++){
         int x = nums[i];
      if(x>=10 && x<100 || x>=1000 && x<10000 || x==pow(10,5)) count++;
      }
    return count;
    }