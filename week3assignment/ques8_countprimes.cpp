
 #include<bits/stdc++.h>
using namespace std;
 
 int countPrimes(int n) {
        int totalprime =0;
        vector<int> prime(n+1,1);
        for(int i=2;i<=sqrt(n) ; i++){
            if(prime[i] == 1){
                for(int j = i*i ;j<=n ;j+=i){
                    prime[j] = 0;
                }
            }
        }
        for(int i = 2 ; i<n ;i++){
            if(prime[i]==1) totalprime++;
        }
        return totalprime;
    }
