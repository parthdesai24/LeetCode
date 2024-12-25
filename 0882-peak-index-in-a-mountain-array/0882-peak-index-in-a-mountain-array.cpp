class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int n=arr.size();
        while(low<=high){
            int mid=(low+high)/2;
            if((mid==0||arr[mid-1]<arr[mid])&&(mid==n-1||arr[mid+1]<arr[mid]))
                return mid;
            else if(mid>0&&arr[mid-1]>arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
};