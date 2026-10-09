class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {

        // If already strictly increasing
        bool increasing = true;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i - 1] >= nums[i]) {
                increasing = false;
                break;
            }
        }

        if(increasing) {
            return true;
        }

        // Try removing every element one by one
        for(int i = 0; i < nums.size(); i++) {

            vector<int> temp = nums;

            temp.erase(temp.begin() + i);

            bool sorted = true;

            for(int j = 1; j < temp.size(); j++) {

                if(temp[j - 1] >= temp[j]) {
                    sorted = false;
                    break;
                }
            }

            if(sorted) {
                return true;
            }
        }

        return false;
    }
};