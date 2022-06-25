/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode h1 = list1;
        ListNode h2 = list1;
        ListNode h3 = list2;
        ListNode h4 = list2;
        int c1 = 0;
        int c2 = 0;
        while(h1 != null && c1 != a-1){
            c1++;
            h1 = h1.next;
        }
        while(h2 != null && c2 != b){
            c2++;
            h2 = h2.next;
        }
        while(h3.next != null){
            h3 = h3.next;
        }
        h1.next = h4;
        h3.next = h2.next;
        return list1;
    }
}