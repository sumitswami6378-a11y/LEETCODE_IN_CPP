class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        
        

         vector<int> ans;

        for(int i =0; i<nums.size(); i++){
               
               if(nums[i] < k){
                ans.push_back(nums[i]);
               }
        }


        return ans.size();
        
    }
};