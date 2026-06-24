#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
   vector<int> groups;
   for(int i = 0 ; i<n ; i++){
    int x;
    cin>>x;
    groups.push_back(x);
   }
   sort(groups.begin(),groups.end());
   int l = 0 ; int r = n-1;
   int taxi =  0 ;
   while(l<=r){
    int strenght = groups[l]+groups[r];
      if(strenght == 4){
        l++;
        r--;
        taxi++;
      }
      else if (strenght>4){
        r--;
        taxi++;
      }
      else {
        while(l<=r && strenght <4){
            l++;
            strenght+= groups[l];
        }
        taxi++;
        r--;
      }
   }
cout<<taxi;

  return 0;
}