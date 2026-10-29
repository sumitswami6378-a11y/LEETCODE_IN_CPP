class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {

        int n = nums.size();
        int peak_sum = 0;
        int valley_sum =0;

        for(int i=1; i<n-1; i++){

            if(nums[i-1] < nums[i] && nums[i] > nums[i+1]){

                peak_sum = peak_sum + nums[i];
            }
            if(nums[i-1] > nums[i] && nums[i] < nums[i+1]){

                valley_sum = valley_sum + nums[i];
            }
        }
        int result = peak_sum - valley_sum;

        return result;
    }
};