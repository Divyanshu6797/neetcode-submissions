class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for(auto it : tokens) {
            if(it == "+") {
                if(!st.empty()) {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                int res = a + b;
                st.push(to_string(res));
                }
               
               
            } else if(it == "/") {
                if(!st.empty()) {
                     int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                int res = b / a;
                st.push(to_string(res));
                }
                
                
            }else if(it == "-") {
                if(!st.empty()){

                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();

                int res = b - a;
                st.push(to_string(res));
                }

                
            } else if(it == "*") {
                if(!st.empty()) {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                int res = a * b;
                
                st.push(to_string(res));
                }
            } else {
                st.push(it);
            }
        }
        int ans = stoi(st.top());
        return ans;
        
    }
};
