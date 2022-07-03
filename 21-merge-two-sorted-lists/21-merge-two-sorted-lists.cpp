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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
    
      ListNode* ans=nullptr;
      ListNode* ptr=ans;
        
         while(list1!=nullptr and list2 != nullptr){
             
             if(list1->val <= list2->val){
                 
                 if(ans==nullptr){
                    ans = new ListNode(list1->val);
                    ptr=ans; 
                 
                 }else{
                     ptr->next=new ListNode(list1->val);
                     ptr=ptr->next;
                 }
      list1=list1->next;
             }else{
                 if(ans==nullptr){
                  ans = new ListNode(list2->val);
                    ptr=ans; 
                 
                 }else{
                     ptr->next=new ListNode(list2->val);
                     ptr=ptr->next;
                 }
              list2=list2->next;   
             }             
         }
        
        while(list1!=nullptr){
            if(ans==nullptr){
                  ans = new ListNode(list1->val);
                    ptr=ans; 
                 
                 }else{
                     ptr->next=new ListNode(list1->val);
                     ptr=ptr->next;
                 }
            list1=list1->next;
        }
    while(list2 != nullptr){
        if(ans==nullptr){
                  ans = new ListNode(list2->val);
                    ptr=ans; 
                 
                 }else{
                     ptr->next=new ListNode(list2->val);
                     ptr=ptr->next;
                 }
        list2=list2->next;
    }
    return ans;
    }
};