class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans ;
        int n = nums.size();
        int maxel = INT_MIN ; 
        
        for(int i = 0 ; i<n-k+1; i++){
            maxel = *max_element(nums.begin()+i,nums.begin()+i+k);
            ans.push_back(maxel);
        }
        return ans  ; 
    }
};
