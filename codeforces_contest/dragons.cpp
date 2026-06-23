#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    int str = s;
    for(int i = 0 ; i<n ; i++){
        int x ,y;
        cin>>x>>y;
        if(str<=x) {
            cout << "NO";
            return 0;
        }
       else str = str+y;
    }
    cout<<"YES";
    return 0;
}