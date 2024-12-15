class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) {
            return {-1, -1};
        }

        int f = lower_bound(nums, target);
        if(f == -1 || nums[f] != target) {
            return {-1, -1};
        }

        int nf = lower_bound(nums, target+1);
        if(nf == -1) {
            return {f, (int)(nums.size())-1};
        } else {
            return {f, nf-1};
        }
    }

    int lower_bound(vector<int>&nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while(low<high) {
            int mid = (low+high)/2;
            if(nums[mid] >= target) {
                high = mid;
            } else if(nums[mid] < target) {
                low = mid+1;
            }
        }

        if(nums[low] >= target) {
            return low;
        } else {
            return -1;
        }
    }
};