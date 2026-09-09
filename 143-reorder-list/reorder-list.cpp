class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == NULL){
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        
        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        slow->next = NULL; 

        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        ListNode* list1 = head;
        ListNode* list2 = prev;

        while(list2 != NULL){
            
            ListNode* temp1 = list1->next;
            ListNode* temp2 = list2->next;

            list1->next = list2;
            list2->next = temp1;

            list1 = temp1;
            list2 = temp2;
        }
    }
};