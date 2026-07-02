class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(); 
       
        
        int ans = 0 ; 
        int rmax = 0 , lmax = 0 ;
        int l = 1 , r = n-2 ;
        for(int i=0 ; i <n ; i++){
            rmax = max(rmax , height[r+1]);
            lmax = max(lmax , height[l-1]);
            ans += min(lmax , rmax) - height[i];
            if(lmax > rmax){
                r-- ; 
            }else{
                l++ ;
            }
        }
        return ans ;
    }
};
