class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> ans;

        

        for(int i=0; i<nums.size(); i++){

            int result = 0;

            result = nums[i]*nums[i];

            ans.push_back(result);
        }

        sort(ans.begin(),ans.end());

        return ans;
        
    }
};