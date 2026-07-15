class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* current = node;
        ListNode* next = current->next;
        while(next->next){
            current->val = next->val;
            current = current->next;
            next = current->next;
        }
        current->val = next->val;
        current->next = NULL;
    }
};