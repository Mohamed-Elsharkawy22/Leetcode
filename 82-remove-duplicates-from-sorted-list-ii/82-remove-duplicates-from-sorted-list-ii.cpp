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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* uniqueList = new ListNode();
        
         ListNode* ptr = uniqueList;
        
        while(head){
            
            if( head->next && head->val != head->next->val)
            { 
                ptr-> next = new ListNode(head->val);  
                head = head->next;
                ptr=ptr->next;
                
            }else if(head->next){
                int value = head->val;
                while( head && head->val == value)
                {
                      head=head->next;
                }
                
            }else{
                ptr-> next = new ListNode(head->val);
                head = head->next;
            }
             
        }
        
        return uniqueList->next;
        
        
    }
};