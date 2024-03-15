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
    int getLength(ListNode*& head) {
        ListNode* temp = head;
        int length = 0;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        return length;
    }

        ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return NULL;
        int len = getLength(head);  
        int actualRotateK = (k%len);
        if(actualRotateK == 0) return head;
        int newLast = len - actualRotateK - 1;
        ListNode *newLastNode = head;
        for(int i=0;i<newLast;i++){
            newLastNode = newLastNode->next;
        }
        ListNode *newHeadNode = newLastNode->next;
        newLastNode->next = NULL;

        ListNode *it = newHeadNode;
        while(it->next){
            it = it->next;
        }
        it->next = head;
        return newHeadNode;
    }
};