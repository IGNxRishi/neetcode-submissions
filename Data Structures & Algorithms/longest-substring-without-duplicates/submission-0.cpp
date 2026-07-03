class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,0);

        int n = s.length();
        int i=0 , j = 0 ; 
        int ans = 0 ;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>1 && i<j){
                mp[s[i]]--;
                i++ ;
            }
            ans = max(ans, j-i+1);
            j++ ;
        }
        return ans ;
    }
};
