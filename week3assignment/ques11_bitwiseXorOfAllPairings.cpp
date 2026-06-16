 #include<bits/stdc++.h>
using namespace std;
 
 int xorr(vector<int> arr){
    int XORR = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        XORR = XORR ^ arr[i];
    }
    return XORR;
   }

    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(),xor1;
    int m = nums2.size(),xor2;
    if(n%2==0) xor2 = 0;
    else xor2 = xorr(nums2);
    if(m%2==0) xor1 = 0;
    else xor1 = xorr(nums1);
    return xor1^xor2;
    }