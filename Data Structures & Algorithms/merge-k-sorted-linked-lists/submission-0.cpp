/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>nums ; 
        for(auto list: lists){
            ListNode* head = list; 
            while(head){
                nums.push_back(head->val);
                head = head->next ;
            }
        }

        sort(nums.begin(),nums.end());
        ListNode ans(0);
        
        ListNode* tmp = &ans;
        int n = nums.size();
        
        for(int i=0 ; i<n ; i++){
            ListNode* node = new ListNode(nums[i]);
            tmp->next = node ; 
            tmp = tmp->next ; 
        }
        return ans.next ;
    }
};
