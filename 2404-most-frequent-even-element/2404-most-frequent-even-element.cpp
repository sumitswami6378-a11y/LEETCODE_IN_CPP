class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int freq = 0;
        int ans = 0;

        for(int i = 0; i<nums.size(); i++){

            int count = 0;

            for(int j=0; j<nums.size(); j++){

                if(nums[i] % 2 == 0){

                    if(nums[i] == nums[j]){

                        count++;
                    }
                  
                }
                else{

                    break;
                }

                
            }

            if(count > freq){

                freq = count;
                ans = nums[i];
            }
        }
      

      if(ans == 0 && freq == 0){

        return -1;
      }

      return ans;

        
    }
};