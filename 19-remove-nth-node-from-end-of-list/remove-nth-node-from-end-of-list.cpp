class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        //counting nodes
        int x=0;
        while(temp){
            temp = temp->next;
            x++;
        }
        //removing head
        if(n==x){
            return head->next;
        }
        int a = x-n;
        ListNode* current = head;
        ListNode* next = current->next;
        int z=1;
        while(z<a){
            current = current->next;
            next = current->next;
            z++;
        }
        current->next = next->next;
        return head;
    }
};