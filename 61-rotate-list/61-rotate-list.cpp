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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || !k) return head;
        
        int sz=0;
        ListNode* ptr=head,
        *tail =NULL,
        *ans=NULL;
       
        
        while(ptr){
            sz++;
             if(ptr->next ==NULL)
                tail=ptr;
            ptr=ptr->next;
        }
        
        k=k%sz;
        
        if(!k){
            return head;
        }
        
        int iter=sz-k-1;
        ptr=head;
        
        while(iter--){
            ptr=ptr->next;
        }
        ans=ptr->next;
        ptr->next=NULL;
        tail->next=head;
        
        return ans;
        
    }
};