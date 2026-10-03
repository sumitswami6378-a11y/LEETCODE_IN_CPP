class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

   
        vector<int> ans;

        for(int i=0; i<2*nums.size(); i++){

            ans.push_back(nums[i % nums.size()]);

           
           
        }       
    
        return ans;
        
    }
};