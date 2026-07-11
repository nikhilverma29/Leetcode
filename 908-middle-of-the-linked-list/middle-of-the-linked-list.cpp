class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        int nodecount = 1;
        ListNode* current = head;
        ListNode* ans = head;
        while(current->next != NULL){
            current = current->next;
            nodecount++;
        }
        
        int NodeToBeReturned = (nodecount/2)+1;
        
        int x = 1;
        while(x != NodeToBeReturned){
            ans = ans->next;
            x++;
        }
        return ans;

    }
};