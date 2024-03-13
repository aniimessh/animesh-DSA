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
    ListNode* findMid(ListNode*&head){
        ListNode* slow = head;;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* mergeLL(ListNode* left, ListNode* right) {
        if (left == 0)
            return right;
        if (right == 0)
            return left;

        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;

        while (left && right) {
            if (left->val <= right->val) {
                mptr->next = left;
                mptr = left;
                left = left->next;
            } else {
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }
        if (left) {
            mptr->next = left;
            // mptr = left;
            // left = left->next;
        }
        if (right) {
            mptr->next = right;
            // mptr = right;
            // right = right->next;
        }

        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head == 0 || head->next == 0){
            return head;
        }

        // break LL into 2 diffrent half;
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        // /sort LL;
        left = sortList(head);
        right = sortList(right);

        // merge Both LL;  
        ListNode* ansLL = mergeLL(left, right);

        return ansLL;


    }
};