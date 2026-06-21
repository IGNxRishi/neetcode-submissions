class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size() ; 
        vector<int>mp(n,-1) ; 

        for(int i = 0 ; i<n; i++){
            int rem = target - nums[i] ; 
            auto it = find(nums.begin(), nums.begin() + i, rem);
            
            if(it != nums.begin() + i){
                int ind = distance(nums.begin(),it);
                if(ind>i){
                    return {i,ind};
                }else{
                    return {ind,i};
                }
            }
        }
        return {};
    }
};
