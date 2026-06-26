class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size() ; 
        vector<int>ans(2);
        for(int i=0 ; i<n ; i++){
            if(find(numbers.begin(),numbers.end(),target - numbers[i])!=numbers.end()){
                auto it = find(numbers.begin(),numbers.end(),target-numbers[i]);
                int ind = it - numbers.begin();
                if(ind > i){
                    ans[0] = i+1 ;
                    ans[1] = ind+1; 
                    return ans ;
                }else{
                    ans[0] = ind+1 ;
                    ans[1] = i + 1 ; 
                    return ans ;
                } 
            }
        }
        return ans ;
    }
};
