class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.size();

       

        for(int i=0; i<n; i++){

           int ans = i;

            for(int j = 0; j<n; j++){
               
               if(i != j && s[i] == s[j]){
                  
                ans = -1;  
                break;
               }
               if(j == n-1){

                return ans;
               }

            }

        }
        
        return -1;
    }
};