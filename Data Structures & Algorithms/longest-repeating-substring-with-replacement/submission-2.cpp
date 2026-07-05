class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int ans = 0 ; 
        int l =  0 ; 

        for(int r = 0 ; r<s.length(); r++){
            count[s[r]-'A']++;
            while((r-l+1)- (int)*max_element(count.begin(),count.end()) > k ){
                count[s[l]-'A']--;
                l++ ;
            }
            ans = max(ans , r-l+1);
        }
        return ans ;
    }
};
