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
       
        rev(head, prev);
        
        return prev;
       
    }
    
    void rev(ListNode* ptr, ListNode* & prev){
        
        if(ptr == NULL)
            return;
        
        if(prev == NULL)
        {
            prev = new ListNode(ptr->val);
        }else{
            
            ListNode* temp = new ListNode(ptr->val);
            temp->next = prev;
            prev=temp;
        }
        
        rev(ptr->next, prev);
    }
    
};