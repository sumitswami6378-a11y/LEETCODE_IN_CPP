class Solution {
public:
    int numberOfCuts(int n) {

         int result =0;

        if(n==0){
            return n;
        }

        if(n == 1){

            return 0;
        }
      
        

        if(n % 2 == 0){

            result = n /2;
        }
        else{

            result = n;
        }


     return result;
        
    }
};