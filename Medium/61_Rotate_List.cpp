// LeetCode 61 - Rotate List
// Time: O(n), Space: O(1)
// LeetCode provides the ListNode definition.
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            ++length;
        }
        k %= length;
        if (k == 0) return head;
        tail->next = head;
        int steps = length - k;
        ListNode* newTail = tail;
        while (steps--) newTail = newTail->next;
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};