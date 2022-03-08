/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
     
        if(head==NULL) return false;
        
        
        ListNode* fastPtr=head,
        * slowPtr = head;
        
        while(fastPtr && fastPtr->next && slowPtr->next ){
        
            fastPtr = fastPtr->next->next;
            slowPtr=slowPtr->next;
            
            if(fastPtr==slowPtr)
                return true;
            
        }
        
        return false;
        
    }
};