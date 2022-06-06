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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        set<ListNode *> seen;
        
        ListNode * ptr1=headA;
        
        while(ptr1!= NULL){
            seen.insert(ptr1);
            ptr1=ptr1->next;
        }
        
        ptr1=headB;
         while(ptr1!= NULL){
            if(seen.find(ptr1)!=seen.end()){
                return ptr1;
            }
            ptr1=ptr1->next;
        }
        
        
        return NULL;
    }
};