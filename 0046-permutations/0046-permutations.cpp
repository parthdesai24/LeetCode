class Solution {
private:
    // Recursive helper function to generate permutations
    void solve(vector<int> nums, int index, vector<vector<int>>& ans) {
        // Base case: if the current index is equal to the size of nums
        if (index == nums.size()) {
            // Add the current permutation to the answer list
            ans.push_back(nums);
            return;
        }

        // Iterate over the elements starting from the current index
        for (int j = index; j < nums.size(); j++) {
            // Swap the current element with the element at position j
            swap(nums[index], nums[j]);
            // Recursively generate permutations for the next index
            solve(nums, index + 1, ans);
            // Backtrack: swap the elements back to their original positions
            swap(nums[index], nums[j]);
        }
    }

public:
    // Public function to generate permutations
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;  // Vector to store all permutations
        int index = 0;            // Start from the first index
        solve(nums, index, ans);  // Call the recursive helper function
        return ans;               // Return the result
    }
};