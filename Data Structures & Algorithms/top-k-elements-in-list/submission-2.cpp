class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> umap;
        vector<vector<int>> bucket(n+1);

        for(auto itr : nums) umap[itr]++;

        for(auto itr : umap) {
            int el = itr.first;
            int freq = itr.second;

            bucket[freq].push_back(itr.first);
        }
        vector<int> ans;
        for(int i = n ; i >=0 ; i--) {
            if(bucket[i].size() == 0) continue;

            while(k != 0 && bucket[i].size() != 0) {
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return ans;

        
    }
};
