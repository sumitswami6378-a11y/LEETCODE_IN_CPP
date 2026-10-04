class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int length = nums.size();

        int max = (nums[0] - 1) * (nums[1] - 1); 

        for(int i =0; i<length; i++){

            for(int j=i+1; j<length; j++){

                if(max < (nums[i] - 1) * (nums[j] - 1)){

                    max = (nums[i] - 1) * (nums[j] - 1);


                }
            }
        }
        
        return max;
    }
};