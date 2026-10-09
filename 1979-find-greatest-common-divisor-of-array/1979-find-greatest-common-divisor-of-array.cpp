class Solution {
public:
    int findGCD(vector<int>& nums) {

        int max = nums[0];
        int min = nums[0];

        int length = nums.size();

        for(int i=0; i<length; i++){

            if(max < nums[i]){

                max = nums[i];

            }
            if(min > nums[i]){

                min = nums[i];
            }
        }
        int gcd = 0; 

        for(int i=1; i<=max; i++){

            if(max % i ==0 && min % i ==0 ){

                gcd = i;
            }
            if(max == min){

                gcd = max;
            }
        }
        
        return gcd;
    }
};