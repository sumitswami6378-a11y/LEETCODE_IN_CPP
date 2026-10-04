class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int n = candies.size();

        int max = candies[0];

        for(int i=0; i<n; i++){

            if(max < candies[i]){

                max = candies[i];
            }
        }

        vector<bool> ans;

        for(int i=0; i<n; i++){

            if(extraCandies + candies[i] >= max){

                ans.push_back(true);
            }
            else{

                ans.push_back(false);
            }
        }


        return ans;
        
    }
};