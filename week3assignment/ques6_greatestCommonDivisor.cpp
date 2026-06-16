#include<bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2) {
        vector<int> comdiv;
        int n1 = str1.size();
        int n2 = str2.size();
        bool flag = true;
        for (int i = 1; i <= min(n1, n2); i++) {
            if (n1%i == 0 && n2%i == 0)
                comdiv.push_back(i);
        }
        for (int k = comdiv.size() - 1; k >= 0; k--) {
            int i = comdiv[k];
            flag = true;
            
            string comstr = str2.substr(0, i);
            for (int j = i; j <= n2 - i; j += i) {
                if (str2.substr(j, i) != comstr) {
                    flag = false;
                    break;
                }
            }
            if (!flag)
                continue;
            for (int j = 0; j <= n1 - i; j += i) {
                if (str1.substr(j, i) != comstr) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                return comstr;
        }
         return "";
    }