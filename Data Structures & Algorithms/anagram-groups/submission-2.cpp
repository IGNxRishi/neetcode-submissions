class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans ; 
        int n = strs.size();
        unordered_map<string,vector<string>>mp ; 
        
        for(int i = 0 ; i<n; i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            mp[key].push_back(strs[i]);
        }

        for(auto item : mp){
            ans.push_back(item.second);
        }
        return ans ;
    }
};
