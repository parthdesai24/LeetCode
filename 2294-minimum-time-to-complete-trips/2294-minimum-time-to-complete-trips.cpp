class Solution {
public:
    bool possibleTrips(vector<int>& times, long long givenTime, int totalTrips) {
        long long actualTrips = 0;

        for (int& t : times) {
            actualTrips += givenTime / t;
        }
        return actualTrips >= totalTrips;
    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 1;
        long long r = (long long)*min_element(begin(time), end(time)) * totalTrips;

        while (l < r) {
            long long mid_time = l + (r - l) / 2;
            if (possibleTrips(time, mid_time, totalTrips)) r = mid_time;
            else l = mid_time + 1;
        }
        return l;
    }
};