class Solution {
public:
    bool isSameAfterReversals(int num) {

        int original = 0;
        int reverse = 0;
        int real = num;

        while(num !=0){

            int digit = num % 10;
            reverse = reverse*10 + digit;
            num = num/10;

        }
        while(reverse !=0){

            int digit = reverse % 10;
            original = original*10 + digit;
            reverse = reverse/10; 
        }
        
        if(original == real){

            return true;
        }
       

            return false;
        
        
        
    }
};