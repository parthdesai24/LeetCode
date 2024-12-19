class Solution {
public:
    long long currval(vector<int>& piles, int k) {
        long long hours = 0;  // Use long long to handle large sums
        for (int pile : piles) {
            hours += (pile + k - 1) / k;  // This is equivalent to ceil(pile / k)
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int greatest = *max_element(piles.begin(), piles.end());  // Get the largest pile size
        int smallest = 1;  // Minimum speed is 1 banana per hour
        int ans = greatest;

        while (smallest <= greatest) {
            int mid = smallest + (greatest - smallest) / 2;
            long long hours = currval(piles, mid);  // Call currval with long long type

            if (hours <= h) {
                ans = mid;  // We can eat all piles within h hours with speed `mid`
                greatest = mid - 1;  // Try a smaller speed
            } else {
                smallest = mid + 1;  // We need a larger speed to eat all piles in `h` hours
            }
        }

        return ans;
    }
};

