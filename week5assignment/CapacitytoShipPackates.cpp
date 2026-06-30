int   noofdays(vector<int> &arr , int maxcap){
    int totalwgh = 0 ;
    int days =1 ;
    for(int i = 0 ; i<arr.size() ; i++){
          if(totalwgh +arr[i] <= maxcap) totalwgh += arr[i];
          else {
            totalwgh = arr[i];
            days ++;
    }
    }
    return days ;
   }

    int shipWithinDays(vector<int>& arr, int days) {
         int low = *max_element(arr.begin() , arr.end());
         long long  high =accumulate(arr.begin() , arr.end() , 0LL);
         while (low<= high){
            long long  mid = (low+high)/2;
            int Days = noofdays(arr,mid);
            if(Days > days) low = mid+1;
            else high = mid-1;
         }
         return low ;
    }