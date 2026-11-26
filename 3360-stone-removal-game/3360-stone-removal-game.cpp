class Solution {
public:
    bool canAliceWin(int n) {

        int count = -1;

       for(int i = 10; i>=0; i--){

        if(i % 2 == 0){

            n = n - i;

            count = 0;

            if(n < 0){

                break;
            }
        }
        else{

            n = n - i;
            count = 1;

            if(n < 0){

                break;
            }
        }
       }

       if(count == 0 && n<0){

        return false;
        
       }

       if(count == 1 && n < 0){

        return true;
       }

       return false;
        
    }
};