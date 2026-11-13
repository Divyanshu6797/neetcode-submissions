class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); 
        int ans = 0;
        if(n < 2) return ans;

        int i = 0;
        int j = 1;
        while(i < n && j <n) {
        if(prices[j] > prices[i]) {
            ans = max(ans, prices[j] - prices[i]);
            j++;
        } else if(prices[j] < prices[i]) {
            i=j;
            j++;
        } else {
            j++;
        }  
        }
        return ans;     
    }
};
