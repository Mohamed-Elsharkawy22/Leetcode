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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int sz=0;
        ListNode* ptr=head;
        ListNode* node1=NULL;
        while(ptr){
            sz++;
            
            if(sz==k){
                node1=ptr;
            }
            ptr=ptr->next;
        }
        ptr=head;
        for(int i=0;i<sz-k;i++)
          ptr=ptr->next;
        
         int v=node1->val;
        node1->val=ptr->val;
        ptr->val=v;
        
        
        return head;
        
    }
};