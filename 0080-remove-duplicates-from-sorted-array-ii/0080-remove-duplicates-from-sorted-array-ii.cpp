class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> ans;




        for(int i=0; i<nums.size(); i++){
            
            int count = 0;

            for(int j=0; j<nums.size(); j++){

                if(nums[i] == nums[j]){

                    count++;

                }
                if(count == 3){

                   for(int k = j; k < nums.size()-1; k++){
                    nums[k] = nums[k+1];
                }

                 nums.pop_back();
                 j--;
                 count--;

                }
            }
        }

        return nums.size();
    }
};