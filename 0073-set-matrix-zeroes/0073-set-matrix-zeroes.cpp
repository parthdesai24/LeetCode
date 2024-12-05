class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int col0 = 1;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(matrix[0][0] == 0){
            for(int i=0;i<col;i++){
                matrix[0][i] = 0;
            }
        }
        if(col0 == 0){
            for(int j=0;j<row;j++){
                matrix[j][0] = 0;
            }
        }

        //Solution-1
        // for(int i=0;i<rows;i++)
        // {
        //     for(int j=0;j<cols;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             for(int k=0;k<cols;k++)
        //             {
        //                 if(matrix[i][k]!=0)
        //                { matrix[i][k]=-1;}

        //             }
        //             for(int l=0;l<rows;l++)
        //             {
        //                  if(matrix[l][j]!=0)
        //                 {matrix[l][j]=-1;}
        //             }
        //         }
        //     }
        // }
        //    for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++)
        //     {
        //         if(matrix[i][j]==-1)
        //         {
        //             matrix[i][j]=0;
        //         }
        //     }
        //    }

        //Solution-2
        // vector<int>rows_v;
        // vector<int>cols_v;
        // for(int i=0;i<rows;i++)
        // {
        //     for(int j=0;j<cols;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             rows_v.push_back(i);
        //             cols_v.push_back(j);
        //         }
        //     }
        // }

        // for(int i=0;i<rows_v.size();i++)
        // {
        //     cout<<rows_v[i]<<" ";
        // }
        // for(int i=0;i<rows_v.size();i++)
        // {
        //     for(int j=0;j<cols;j++)
        //     {
        //         matrix[rows_v[i]][j]=0;
        //     }
        // }
        //  for(int i=0;i<cols_v.size();i++)
        // {
        //     for(int j=0;j<rows;j++)
        //     {
        //         matrix[j][cols_v[i]]=0;
        //     }
        // }
       
        
        
    }
};