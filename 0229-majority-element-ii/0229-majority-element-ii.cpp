class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int tempCnt1 = 0, tempCnt2 = 0;
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        for(int i = 0; i< nums.size(); i++){
            if(tempCnt1 == 0 && nums[i] != ele2){
                tempCnt1 = 1;
                ele1 = nums[i];
            }
            else if(tempCnt2 == 0 && nums[i] != ele1){
                tempCnt2 = 1;
                ele2 = nums[i];
            }
            else if(nums[i] == ele1) tempCnt1++;
            else if(nums[i] == ele2) tempCnt2++;
            else{
                tempCnt1--;
                tempCnt2--;
            }
        }
        vector<int> ls;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(ele1 == nums[i]) cnt1++;
            if(ele2 == nums[i]) cnt2++;
        }
        int mini = (int)(nums.size()/3) + 1;
        if(cnt1 >=mini) ls.push_back(ele1);
        if(cnt2 >=mini) ls.push_back(ele2);
        sort(ls.begin(), ls.end());
        return ls;
    }
};