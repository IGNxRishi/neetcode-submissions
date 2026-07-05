class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if(m<n){
            return false ;
        }

        vector<int>m1(26,0);
        vector<int>m2(26,0);

        for(auto c : s1){
            m1[c-'a']++;
        }

        for(int i = 0 ; i<n ; i++){
            m2[s2[i]-'a']++;
        }

        if(m1 == m2){
            return true ; 
        }

        for(int i=n; i<m; i++){
           
            m2[s2[i]-'a']++ ;
            m2[s2[i-n]-'a']--;
            if(m1==m2){
                return true ;
            }
        }

        return false ;
    }
};
