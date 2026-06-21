class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        for(int i= 0 ; i<n ; i++){
            int rem = target - nums[i];
            if(find(nums.begin(),nums.end(),rem)!=nums.end() && find(nums.begin(),nums.end(),rem)-nums.begin()!=i){
                auto it = find(nums.begin(),nums.end(),rem);
                int p = it - nums.begin();
                ans.push_back(p);
                ans.push_back(i);
                sort(ans.begin(),ans.end());
                return ans ;
            }
        }
        return ans ;
    }
};
