class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        // vector<vector<int>> ans;
        for(int i = 0;i < n ; i++) {
            int left = i+1;
            int right = n-1;

            int req = 0 - nums[i];
            while(left < right) {
                
                int sum =  nums[left] + nums[right];
                if(sum < req) left++;
                else if(sum == req) {
                    vector<int> temp = {nums[i], nums[left], nums[right]};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                    left++;
                    right--;
                }
                else right--;

            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
