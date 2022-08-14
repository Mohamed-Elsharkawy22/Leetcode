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
    ListNode* reverseList(ListNode* head) {
        
       
       
        ListNode* prev=NULL;
        ListNode* ptr2=head;
        
        while(ptr2 != NULL)
        {
            
            if(prev == NULL)
            {
                prev = new ListNode(ptr2->val);
                ptr2=ptr2->next;
            }else
            { 
                ListNode* ptr = new ListNode(ptr2->val);
                ptr->next=prev;
                prev=ptr;
                ptr2=ptr2->next;
            }
               
        }
        
        return prev;
    }
};