class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* current = head;
        ListNode* next = current->next;
        while(next!=NULL){
            if(current->val == next->val){
                current->next = next->next;
                next = next->next;
            }
            else{
                current = current->next;
                next = current->next;
            }
        } 
        return head;
    }
};