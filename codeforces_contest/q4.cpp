#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){

        if(i + 2 < s.size() &&
           s[i] == 'W' &&
           s[i+1] == 'U' &&
           s[i+2] == 'B'){

            cout << " ";

            i += 2;
        }
        else{
            cout << s[i];
        }
    }

    return 0;
}