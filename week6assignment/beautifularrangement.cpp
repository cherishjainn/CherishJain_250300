 int count = 0;

 void combinations(int index , vector<int> &freq, int n){
    if(index > n) {
    count++;
    }
    for(int numb = 1 ; numb<=n ; numb++){
        if(!freq[numb] && (index%numb == 0 || numb%index == 0) ){
           freq[numb] = 1;
           combinations(index+1,freq,n);
           freq[numb] = 0;
        }
    }
 }



    int countArrangement(int n) {
        vector<int> freq(n+1);
        combinations(1,freq,n);
        return count;
    }
};