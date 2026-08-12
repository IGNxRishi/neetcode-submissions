class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto num : nums1){
            nums2.push_back(num);
        }
        sort(nums2.begin(),nums2.end());
        int n = nums2.size();
        if(n%2==0){
            int a = n/2 ;
            int b = a-1 ;
            double tmp = nums2[a] + nums2[b];
            return tmp/2 ;
        }
        double ans = 0 ;
        int x = n/2 ;
        ans = nums2[x];
        return ans ;
    }
};
