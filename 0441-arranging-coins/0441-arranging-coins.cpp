class Solution {
public:
    int arrangeCoins(int n) {

        if(n == 1){
            return n;
        }

        long long count = 0;
        int result = 0;

      

             for(int i = 1; i <= n; i++){

            count += i;

            if(count > n){
                break;
            }

            result++;
        }

        


    return result;
        
    }
};