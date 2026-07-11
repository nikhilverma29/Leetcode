class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        if (head1 == NULL)
            return head2;

        if (head2 == NULL)
            return head1;

        ListNode* current1 = head1;
        ListNode* current2 = head2;
        //deciding head of the merged list
        ListNode* newhead;
        if(current1->val <= current2->val){
            newhead = current1;
            current1 = current1->next;
        }
        else{
            newhead = current2;
            current2 = current2->next;
        }
        //connector
        ListNode* connector = newhead;

        //merging
        while(current1 != NULL && current2 != NULL){
            if(current1->val <= current2->val){
                connector->next = current1;
                connector = connector->next;
                current1 = current1->next;
            }
            else{
                connector->next = current2;
                connector = connector->next;
                current2 = current2->next;
            }
        }
        //when null hits
        if(current1 != NULL){
            connector->next = current1;
        }
        else{
            connector->next = current2;
        }

        return newhead;

    }
};