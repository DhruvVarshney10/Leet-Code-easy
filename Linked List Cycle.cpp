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
    bool hasCycle(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head;

        while (q && q->next) {

            p = p->next;
            q = q->next->next;
            if (p == q) {
                return true;
            }

        }
        return false;

    }


};
/*
Runtime: 8 ms, faster than 96.40% of C++ online submissions for Linked List Cycle.
Memory Usage: 7.9 MB, less than 81.58% of C++ online submissions for Linked List Cycle.

*/