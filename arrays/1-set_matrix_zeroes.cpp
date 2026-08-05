class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;

    // First pass to mark the rows and columns that need to be zeroed

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0] = 0;
                if(j!=0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }

    }

    // Second pass to set the zeroes based on the markers

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }

            }
        }
    }

    // Finally, set the first row and first column to zero if needed

    if(matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j] = 0;
        }
    }


    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0] = 0;
        }
    }

    }
};