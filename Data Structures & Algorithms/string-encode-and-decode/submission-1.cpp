class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = ""; 

        for(auto s : strs){
            string len = to_string((int)s.length());
            encoded+=len ;
            encoded+='#';
            encoded+=s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>ans ; 
        int n = s.length();
        int i=0 ; 
        while(i<n){
           int j = i ; 
           while(j<n && s[j]!='#'){
            j++ ; 
           }
           int len = stoi(s.substr(i,j-i));
           j++ ; 
           ans.push_back(s.substr(j,len));
           i = j + len ;
        }
        return ans ;
    }
};
