class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = prices[0];

        int profit =0;
        int sum = 0;

        for(int i=0; i<prices.size(); i++){

            if(buy > prices[i]){

                buy = prices[i];
            }

            if(prices[i] > buy){

                profit = prices[i] - buy;


                sum = sum  + profit;

                  buy = prices[i];
                  
            }

          


            
        }


        return sum;
        
    }
};