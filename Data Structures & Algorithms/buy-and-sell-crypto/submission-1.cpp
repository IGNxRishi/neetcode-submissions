class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =  0 ; 

        int n = prices.size();

        int buy =  0 ; 
        for(int i = 0 ; i<n ; i++){
            if(prices[i]<prices[buy]){
                buy = i ;
            }
            ans = max(ans,prices[i]-prices[buy]);
        }
        return ans ;
    }
};
