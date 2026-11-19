class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;

        unordered_map<int, int> umap;

        for(auto it : nums) umap[it]++;

        for(auto it : umap) {
            int element = it.first;
            int frequency = it.second;

            pq.push({frequency, element});

            if(pq.size() > k) {
                pq.pop();
            }
        }

        vector<int> ans;

        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;


        
        
    }
};
