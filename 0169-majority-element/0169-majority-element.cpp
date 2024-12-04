class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int el;
        for(int i = 0;i < nums.size(); i++){
            if(cnt1 == 0){
                cnt1 = 1;
                el = nums[i];
            }
            else if(nums[i] == el){
                cnt1++;
            }
            else{
                cnt1--;
            }
        }
        int cnt2 = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == el){
                cnt2++;
            }
            if(cnt2 > nums.size() /2){
                return el;
            }
        }
        return -1;
    }
};