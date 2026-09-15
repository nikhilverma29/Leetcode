class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        int counter = 0;
        while(current){
            current = current->next;
            counter++;
        }
        if(head == NULL){
            return NULL;
        }
        if(counter == n){
            return head->next;
        }
        int till = counter-n;
        ListNode* tracker = head;
        ListNode* sectracker = tracker->next;
        int anothercounter = 1;
        
        while(anothercounter != till){
            tracker = tracker->next;
            sectracker = tracker->next;
            anothercounter++;
        }
        tracker->next = sectracker->next;
        return head;
    }
};