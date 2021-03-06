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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        if (head != NULL) {
            ListNode* q = head->next;
            while (q != NULL) {
                if (p->val != q->val) {
                    p = q;
                    q = q->next;

                }
                else {

                    p->next = q->next;
                    delete q;
                    q = p->next;
                }
            }
        }
        return head;
    }
};