class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        unordered_map<char,int> umap;
        int ans = 0;

        while(i < n && j < n) {
           umap[s[j]]++;

            while(umap[s[j]] > 1) {
                umap[s[i]]--;
                i++;
            
           }
            ans = max(j-i+1,ans);
            j++;
    
        }
        return ans;

        
    }
};
