class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* current = head;
        // if(head == NULL || head->next == NULL){
        //     return NULL;
        // }
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                break;
            }
        }
        if(fast == NULL || fast->next == NULL){
            return NULL;
        }
        while (current != slow){
            current = current->next;
            slow = slow->next;
        }
        return current;
    }
};