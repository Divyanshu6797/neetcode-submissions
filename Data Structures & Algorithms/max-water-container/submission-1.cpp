class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n - 1;
        int ans = 0;
        while(i < j) {
            int currWater = min(heights[i], heights[j]) * (j-i);
            if(heights[i] < heights[j]) i++;
            else j--;
            ans = max(ans, currWater);
        }
        return ans;
        
    }
};
