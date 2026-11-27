class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;

        for(int i=0; i<nums.size(); i++){

            if(nums[i] % 2 == 0){

                even.push_back(nums[i]);
            }
            else{

                odd.push_back(nums[i]);
            }
        }

        vector<int> ans;

        for(int j = 0; j < even.size(); j++){
            
                   ans.push_back(even[j]);
        }

        for(int k = 0; k < odd.size(); k++){

                    ans.push_back(odd[k]);
        }

        return ans;
        
    }
};