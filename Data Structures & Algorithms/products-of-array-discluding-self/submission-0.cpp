class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);

        int prodPrefix = 1;
        int prodSuffix = 1;

        for(int i = 0; i< n;i++) {
            prodPrefix *= nums[i];
            prodSuffix *= nums[n-i-1];
            prefix[i] = prodPrefix;
            suffix[n-i-1] = prodSuffix;
        }

        for(int i = 0 ;i < n; i++) {
            if(i==0) nums[i] = suffix[i+1];
            else if(i == n-1) nums[i] = prefix[n-2];
            else nums[i] = prefix[i-1] * suffix[i+1]; 
        }
        return nums;

    }
};
