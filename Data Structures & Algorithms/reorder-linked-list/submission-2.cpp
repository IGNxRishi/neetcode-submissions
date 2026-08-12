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
    void reorderList(ListNode* head) {
        if(head==nullptr && head->next==nullptr){
            return ;
        }
        ListNode* slow = head ; 
        ListNode* fast = head->next ; 

        while(fast && fast->next){
            slow = slow->next ; 
            fast = fast->next->next ;
        }

        ListNode* secondhalf = slow->next ;
        slow->next = nullptr ; 

        ListNode* firsthalf = head ;

        ListNode* prev = nullptr ;

        while(secondhalf){
            ListNode* nxt = secondhalf->next ;
            secondhalf->next = prev ;
            prev = secondhalf ;
            secondhalf = nxt ;
        }

        secondhalf = prev ;

        while(secondhalf){
            ListNode* rem1 = firsthalf->next ;
            ListNode* rem2 = secondhalf->next ;
            firsthalf->next = secondhalf ; 
            secondhalf->next = rem1 ;
            firsthalf = rem1  ;
            secondhalf = rem2 ;
        }
    }
};
