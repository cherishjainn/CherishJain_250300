  int arrangeCoins(int n) {
        int low = 1 , high = ceil((double)n/2.0);
        int ans = 0;
        while (low<=high) {
            long long mid = low + (high-low)/2;
            long long coins = mid * (mid + 1) / 2;
            if (coins == n) return  mid;
            else if (coins < n) {
                low = mid + 1;
                ans = mid;
            }
            else high = mid - 1;
        }
        return ans;
    }