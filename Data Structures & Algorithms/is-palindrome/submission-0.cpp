class Solution {
public:
    bool isPalindrome(string s) {
        string ns = "";

        for(auto c: s){
            if(isalnum(c)){
                ns+= tolower(c);
            }
        }
        int i = 0 , j = ns.length()-1 ; 

        while(i<=j){
            if(ns[i]==ns[j]){
                i++ , j--;
            }else{
                return false ;
            }
        }
        return true ;
    }
};
