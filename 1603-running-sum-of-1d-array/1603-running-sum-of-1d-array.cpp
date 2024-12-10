class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums;
        for(int i = 1; i < n; i++){
            nums[i] = nums[i] + nums[i-1];
        }
        return nums;
    }
};