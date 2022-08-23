/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        
        if(head == null) return false;
        
        ListNode pt1=head, pt2= head;
        
        
        while( pt2 != null && pt1 != null && pt1.next != null ){
            
            pt1 = pt1.next.next;
            pt2 = pt2.next; 
            
            if(pt1 == pt2)
                return true;
            
        }
        
        
        return false;
    }
}