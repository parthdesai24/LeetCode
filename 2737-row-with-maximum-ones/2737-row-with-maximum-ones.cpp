class Solution {
public:
int noOfOnes(vector<int>&row,int n){
    if(n==1)return row[0]==1;
    int low =0;
    int high = n-1;
    sort(row.begin(),row.end());

    while(low<=high){
        int mid = low+(high-low)/2;

        if(row[mid]==1){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    return (n-1)-low+1;
}
vector<int> rowAndMaximumOnes(vector<vector<int>>& matrix) {
   int max1=0;
   int indexOfMaxRow=0;
   int n= matrix.size();
       int m = matrix[0].size();
   for(int i=0;i<n;i++){
       int OneINThisRow = noOfOnes(matrix[i],m);
       if(OneINThisRow>max1){
           max1=OneINThisRow;
           indexOfMaxRow = i;
       }
   }
   return {indexOfMaxRow,max1};
    }
};