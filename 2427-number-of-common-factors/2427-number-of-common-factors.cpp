class Solution {
public:
    int commonFactors(int a, int b) {

        vector<int> ans;

        for(int i=1; i<=1000; i++){

            if(a % i == 0 && b % i == 0){


                ans.push_back(i);


            }
        }

        return ans.size();
        
    }
};