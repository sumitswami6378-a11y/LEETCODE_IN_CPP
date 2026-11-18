class Solution {
public:
    bool isHappy(int n) {

        int sum =0;

        int original = n;

        unordered_set<int> seen;

        while(sum != 1){

            sum = 0;

            while(original != 0){

                int digit = original % 10;
                sum = sum + digit*digit;
                original = original / 10;

            }

            if(sum == 1){

                return true;
            }

            if(seen.count(sum)){

                return false;
            }


            seen.insert(sum);

            original = sum;
        }

        return false;

       
        
    }
};