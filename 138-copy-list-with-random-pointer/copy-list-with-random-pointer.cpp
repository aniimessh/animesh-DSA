/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* helper(Node*&head, unordered_map<Node*, Node*>&map){
        if(head == 0) return head;

        Node *newHead = new Node(head->val);
        map[head] = newHead;
        newHead->next = helper(head->next, map);
        if(head->random){
            newHead->random = map[head->random];
        }
        return newHead;
    }

    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*>map;
        return helper(head, map);
    }
};