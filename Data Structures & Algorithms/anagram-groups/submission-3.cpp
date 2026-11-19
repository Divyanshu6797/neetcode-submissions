class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> umap;

        for(auto itr : strs) {
            string key = itr;
            sort(key.begin(), key.end());
            umap[key].push_back(itr);
        }

        vector<vector<string>> ans;
        for(auto itr : umap) {
            ans.push_back(itr.second);
        }
        return ans;

        
    }
};
