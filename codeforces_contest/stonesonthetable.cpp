#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
string s;
int remove = 0;
cin >> n ;
cin>>s;
char prev = s[0];
for(int i = 1;i<s.size() ;i++){
  if(s[i]==prev) remove++;
  prev = s[i];
}
cout<<remove;
return 0;
}