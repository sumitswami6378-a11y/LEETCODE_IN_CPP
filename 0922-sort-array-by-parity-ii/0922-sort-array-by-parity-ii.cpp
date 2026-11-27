class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

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

        int j = 0;
        int k = 0;

        vector<int> ans;

        for(int i = 0; i<nums.size(); i++){


            if(i % 2 == 0){

                 ans.push_back(even[j++]);
            }
            else{

                ans.push_back(odd[k++]);
            }
        }
        

        return ans;
    }
};