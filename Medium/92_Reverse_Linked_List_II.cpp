// LeetCode 92 - Reverse Linked List II
// Time: O(n), Space: O(1)
// LeetCode provides the ListNode definition.
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* before = &dummy;
        for (int i = 1; i < left; ++i) before = before->next;

        ListNode* curr = before->next;
        for (int i = 0; i < right - left; ++i) {
            ListNode* moving = curr->next;
            curr->next = moving->next;
            moving->next = before->next;
            before->next = moving;
        }
        return dummy.next;
    }
};