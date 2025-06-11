class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1, el2;

        for(int i = 0; i < nums.size(); i++){
            if(cnt1 == 0 && nums[i] != el2){
                cnt1++;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && nums[i] != el1){
                cnt2++;
                el2 = nums[i];
            }
            else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        int cntele1 = 0, cntele2 = 0;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(el1 == nums[i]) cntele1++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(el2 == nums[i]) cntele2++;
        }
        if(cntele1 > nums.size() / 3) result.push_back(el1);
        if(cntele2 > nums.size() / 3) result.push_back(el2);

        return result;
    }
};