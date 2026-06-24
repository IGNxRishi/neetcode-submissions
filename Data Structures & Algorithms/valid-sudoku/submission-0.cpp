class Solution {
public:
    bool check(vector<vector<char>>&board, int i , int j , char c){
        if(c=='.'){
            return true ; 
        }
        for(int val =0 ; val< 9 ; val++){
            if(val == j){
                continue ;
            }
            if(board[i][val]==c){
                return false ;
            }
        }

        for(int val = 0 ; val<9 ; val++){
            if(val ==i){
                continue ; 
            }else if(board[val][j]==c){
                return false ;
            }
        }
        int rw = (i/3) *3 ;
        int cl = (j/3) *3 ;
        for(int row = rw ; row<rw+3 ;row++){
            for(int col = cl; col<cl+3; col++){
                if(row==i && col == j){
                    continue ;
                }else if(board[row][col]==c){
                    return false ;
                }
            }
        }
        return true  ; 
    } ;

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size() ; 
        for(int i = 0  ; i<n ; i++){
            for(int j=  0 ; j<n ; j++){
                if(check(board,i , j,board[i][j])==false){
                    return false ;
                }
            }
        }
        return true ; 
    }
};
