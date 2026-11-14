class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int,int>> st;
        st.push({temperatures[n-1], n-1});
        temperatures[n-1] = 0;

        for(int i = n-2; i>=0; i--) {
            if(temperatures[i] >= st.top().first) {
                while(!st.empty() && st.top().first <= temperatures[i]) st.pop();
                if(st.empty()) {
                st.push({temperatures[i],i});
                temperatures[i] = 0;
 
                } else {
                    pair<int,int> temp = st.top();
                    st.push({temperatures[i], i});
                    temperatures[i] = abs(temp.second - i);
                    
                } 
            } else {
                    int temp = temperatures[i]; 
                    temperatures[i] = abs(st.top().second - i);
                    st.push({temp, i});
                }
            




        }  
        return temperatures;              
    }
};
