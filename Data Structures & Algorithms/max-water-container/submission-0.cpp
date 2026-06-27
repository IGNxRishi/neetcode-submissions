class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans  = 0 ; 
        int n = heights.size() ; 

        int l = 0 , r = n-1 ;
        if(n==0){
            return 0 ;
        }
        if(n==1){
            return heights[0];
        }

        while(l<r){
            int area = (r - l) * min(heights[l],heights[r]);
            ans = max(ans , area);
            if(heights[l]>heights[r]){
                r-- ; 
            }else{
                l++ ;
            }
        }
        return ans ; 
    }
};
