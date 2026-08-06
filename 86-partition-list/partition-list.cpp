class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode smallerDummy(0);
        ListNode greaterDummy(0);
        ListNode* smaller = &smallerDummy;
        ListNode* greater = &greaterDummy;

        while (head!=nullptr) {
            if(head->val < x){
                smaller->next = head;
                smaller = smaller->next;
            } 
            else{
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }

        greater->next = nullptr;
        smaller->next = greaterDummy.next;

        return smallerDummy.next;
    }
};