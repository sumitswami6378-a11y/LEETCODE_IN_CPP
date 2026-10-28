class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++){

            int max = nums[i];
            bool found = false;

            // i+1 se n-1 tak
            for(int j = i + 1; j < n; j++){

                if(max < nums[j]){

                    ans.push_back(nums[j]);
                    found = true;
                    break;
                }
            }

            // Agar right side mein nahi mila
            // to 0 se i-1 tak check karo
            if(found == false){

                for(int k = 0; k < i; k++){

                    if(max < nums[k]){

                        ans.push_back(nums[k]);
                        found = true;
                        break;
                    }
                }
            }

            if(found == false){

                ans.push_back(-1);
            }
        }

        return ans;
    }
};