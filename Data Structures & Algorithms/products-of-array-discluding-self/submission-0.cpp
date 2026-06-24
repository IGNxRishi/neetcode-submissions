class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>left(n,1) ;
        vector<int>right(n,1); 
        int prod = 1 ; 
        for(int i = 0 ; i <n ;i++){
            left[i] = prod ; 
            prod *=nums[i]  ;
        }
        prod = 1 ;
        for(int i=n-1 ; i>=0 ; i--){
            right[i] = prod ; 
            prod *= nums[i] ;
        } 

        vector<int>ans(n,1); 
        for(int i = 0 ; i<n ; i++){
            ans[i] = left[i] * right[i];
        }
        return ans ;
    }
};
