class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val==val){
            head = head->next;
        }        
        if(head==NULL){
            return NULL;
        }
        ListNode* current = head;
        ListNode* next = current->next;
        while(next!=NULL){
            if(next->val==val){
                current->next = next->next;
                next = current->next;
            }
            else{
                current = current->next;
                next = current->next;
            }
        }
        return head;
    }
};