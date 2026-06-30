bool canEat(vector<int> &piles , int speed , int hoursAvailable ){
        int h = 0;
        for(int i = 0 ;i<piles.size(); i++){
            h += ceil((double)piles[i] / (double)speed);
            if(h>hoursAvailable) return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = *max_element(piles.begin(),piles.end());
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(canEat(piles,mid,h)) high = mid-1;
            else low = mid+1;
        }
        return low;
    }