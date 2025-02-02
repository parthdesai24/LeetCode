class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> ans(nums.begin(), nums.end());
        sort(ans.begin(), ans.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums == ans) {
                return true;
            }
            rotate(nums.begin(), nums.begin() + 1, nums.end());
        }
        return false;
    }
};