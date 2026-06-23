#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int count0 = 0 , count1 =0;
    

    for(int i = 0; i<s.size(); i++){
    if(s[i]=='1'){
        count0 = 0;
        count1++;
    }
    else {
        count1 = 0 ;
        count0++;
    }
    if(count0>=7 || count1>=7){
        cout<<"YES";
        return 0;
    }
    }
    cout<<"NO";
    return 0;
}