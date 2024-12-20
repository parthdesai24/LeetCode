class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k) {
        int cnt = 0;
        int noOfB = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= day) {
                cnt++;
            } else {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int n = bloomDay.size();
        if (val > n)
            return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++) {
            maxi = max(bloomDay[i], maxi);
            mini = min(bloomDay[i], mini);
        }
        int low = mini, high = maxi;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k) == true) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};