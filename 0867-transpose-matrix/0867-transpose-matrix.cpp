class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int column = matrix[0].size();

       // int temp;
        
         vector<vector<int>> ans(column, vector<int>(row));

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){

               ans[j][i] = matrix[i][j];
            }
        }

        return ans;
        
    }
};