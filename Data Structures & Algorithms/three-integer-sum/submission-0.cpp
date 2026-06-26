class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>tmp ; 
        int n = nums.size() ;
        
        sort(nums.begin() , nums.end()); 

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n; j++){
                for(int k = 0 ; k<n ; k++){
                    if(nums[i]+nums[j]+nums[k]==0 && i!=j && j!=k && i!=k){
                        vector<int>numbers = {nums[i],nums[j],nums[k]};
                        sort(numbers.begin(), numbers.end());
                        tmp.insert(numbers);
                    }
                }
            }   
        }
        vector<vector<int>>ans ; 
        for(auto it : tmp){
            ans.push_back(it);
        }
        return ans ; 
    }
};
