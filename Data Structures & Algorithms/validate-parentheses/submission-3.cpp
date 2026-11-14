class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;

        for(char it : s) {

            if(it == '{' || it == '[' || it == '(') st.push(it);

            if(it == '}') {
                if(st.empty()) return false;
                if(st.top() != '{') return false;
                while(!st.empty() && st.top() != '{') st.pop();
                st.pop();
            }
            if(it == ')') {
                
                if(st.empty()) return false;
                if(st.top() != '(') return false;
                while(!st.empty() && st.top() != '(') st.pop();
                st.pop();
            }
            if(it == ']') {
                if(st.empty()) return false;
                if(st.top() != '[') return false;
                while(!st.empty() && st.top() != '[') st.pop();
                st.pop();
            }

        }
        if(st.empty()) return true;
        return false;
        
        
    }
};
