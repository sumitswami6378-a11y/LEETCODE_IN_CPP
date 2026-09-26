
        class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++) {

            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] == nums[j]) {

                    for(int k = j; k < nums.size() - 1; k++) {
                        nums[k] = nums[k + 1];
                    }

                    nums.pop_back();
                    j--;
                }
            }
        }

        return nums.size();
    }
};
        

