class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>elements;
        int n = matrix.size();
        int m = matrix[0].size(); 

        for(int i=0 ; i<n ;i++){
            for(int j = 0; j<m ; j++){
                elements.push_back(matrix[i][j]);
            }
        }

        int l = 0 , r = elements.size()-1 ;

        while(l<=r){
            int mid = l + (r-l)/2 ;
            if(elements[mid]==target){
                return true ;
            }else if (target > elements[mid]){
                l = mid + 1 ;
            }else {
                r = mid - 1 ;
            }
        }
        return false ;
    }
};
