class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int num : nums) {
            if (seen[num] >= 1)
                return true;
                seen[num]++;
        }
        return false;

        // sort(nums.begin(), nums.end());
        // for(int i = 1 ; i < nums.size(); i++){
        //     if(nums[i] == nums[i-1]) return true;
        // }
        // return false;
    }
};