class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == NULL){
            return false;
        }
        if(head->next == NULL){
            return false;
        }
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
            // else{
            //     return false;
            // }
        }
        return false;
    }
};