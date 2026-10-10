class Solution {
public:
    int missingNumber(vector<int>& nums) {

        for(int i=0; i<=nums.size(); i++){

            bool found = false;
            for(int j=0; j<nums.size(); j++){

                if(i == nums[j]){

                    found = true;
                }
            }

            if(found == false){

                return i;
            }
        }

        return -1;
        
    }
};