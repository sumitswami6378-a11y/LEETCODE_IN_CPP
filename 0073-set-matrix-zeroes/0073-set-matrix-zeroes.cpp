class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int column = matrix[0].size();
      //  int count = 0;
        //int start = 0;

       vector<vector<bool>> visited(row, vector<bool>(column, false));
        for(int i=0; i<row; i++){

            for(int j=0; j<column; j++){

                visited[i][j] = false;

                if(matrix[i][j] == 0){

                    visited[i][j] = true;
                   
                }
               
            }
           
        }

         for(int i=0; i<row; i++){
            
             for(int j=0; j<column; j++){

                if(matrix[i][j] == 0 && visited[i][j] == true){


                    // row zero 

                    for(int k=0; k<column; k++){

                        matrix[i][k] = 0;
                       
                    }

                    // column zero

                    for(int k=0; k <row; k++){

                        matrix[k][j] = 0;
                    }
                 


                }
            }
         }
        
    }
};