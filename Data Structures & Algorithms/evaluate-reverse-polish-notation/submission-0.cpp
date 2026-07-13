class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();

        for (int i = 0; i < n; i++) {
            if (tokens[i] == "+") {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                st.push(n1 + n2);
            } else if (tokens[i] == "-") {
                int m2 = st.top();
                st.pop();
                int m1 = st.top();
                st.pop();
                st.push(m1 - m2);
            } else if (tokens[i] == "*") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(x * y);
            } else if (tokens[i] == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b / a);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        int ans = (int)st.top();
        return ans;
    }
};
