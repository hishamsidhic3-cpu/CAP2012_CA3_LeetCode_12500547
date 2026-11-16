// LeetCode 83 - Remove Duplicates from Sorted List
// Time: O(n), Space: O(1)
// LeetCode provides the ListNode definition.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return head;
    }
};