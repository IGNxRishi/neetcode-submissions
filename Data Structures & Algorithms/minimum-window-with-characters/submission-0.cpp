class Solution {
public:
    string minWindow(string s, string t) {
    
        int minlen = INT_MAX; 
        int sindex = -1 ;

        int n = s.length();
        int m = t.length();

        for(int i = 0 ; i<n ;i++)
        {
            vector<int>mp(256,0);
            int count = 0  ; 
            for(int j = 0 ; j<m ;j++){
                mp[t[j]]++;
            }
            for(int j= i ; j<n ;j++){
                if(mp[s[j]]>0){
                    count++ ; 
                    mp[s[j]]-- ;
                }
                if(count==m){
                    if(j-i+1 < minlen){
                        minlen = j-i+1 ; 
                        sindex = i ; 
                        break ; 
                    }
                }
            }
        }
        if(sindex<0 ||minlen==INT_MAX){
            return "";
        }
        string ans = s.substr(sindex,minlen);
        return ans  ;
    }
};
