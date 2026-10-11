class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int max = nums[0];
         int index = 0;

        for(int i=0; i<nums.size(); i++){

           

            if(max < nums[i]){

                max = nums[i];
                 index = i;
               
            }
            
           
            
           
        }

        for(int i=0; i<nums.size(); i++){

            if(i != index && max < 2*nums[i]){

                return -1;
            }
        }

        return index;
        
    }
};