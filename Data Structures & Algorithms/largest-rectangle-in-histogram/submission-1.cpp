class Solution {
public:
    vector<int>prevsmaller(vector<int>&heights, int n){
        vector<int>arr(n,-1);
        stack<int>st;
        st.push(-1);
        for(int i = 0 ; i < n;  i++){
            int cur =  heights[i];
            while(st.top()!= -1 && heights[st.top()]>=cur){
                st.pop();
            }
            arr[i] = st.top();
            st.push(i);
        }
        return arr ;
    };

    vector<int>nextsmaller(vector<int>&heights, int n){
        vector<int>arr(n,-1);
        stack<int>st ; 
        st.push(-1);
        for(int i=n-1 ;i>=0 ; i--){
            int cur = heights[i];
            while(st.top()!= -1 && heights[st.top()]>=cur){
                st.pop();
            }
            arr[i] = st.top();
            st.push(i);
        }
        return arr ;
    };

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>next(n,-1);
        vector<int>prev(n,-1);

        next = nextsmaller(heights,n);
        prev = prevsmaller(heights,n);
        
        int ans = 0 ; 
        for(int i= 0 ; i<n ;i++){
            int l = heights[i];

            if(next[i]==-1){
                next[i] = n ;
            }
            int b = next[i] - prev[i] -1 ; 
            int tmp = l * b ; 
            ans = max(ans, tmp);
        }
        return ans ;
    }
};
