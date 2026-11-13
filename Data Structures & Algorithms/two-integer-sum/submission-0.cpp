class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int n = nums.size();

        for(int i = 0;i < n ; i++) {
            int req = target - nums[i];
            if(umap.contains(req)) {
                return {umap[req], i};
            } 
            umap[nums[i]] = i;
        }
        return {-1,-1};
        
    }
};
