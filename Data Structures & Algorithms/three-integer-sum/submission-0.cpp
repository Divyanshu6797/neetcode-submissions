class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        for(int i = 0;i < n ;i++) {
            unordered_set<int> umap;
            for(int j = i+1;j < n; j++) {
                int firstNum = nums[i];
                int secondNum = nums[j];

                int req = 0 - (firstNum + secondNum);

                vector<int> temp = {req, firstNum, secondNum};
                sort(temp.begin(), temp.end());
                if(umap.contains(req)) ans.insert(temp);
                umap.insert(nums[j]);
            }                           
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
