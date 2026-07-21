class Solution {
public:
    ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
        if(h1==NULL && h2==NULL){
            return NULL;
        }

        ListNode* c1 = h1;
        ListNode* c2 = h2;
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int carry = 0;
        while(c1 || c2){
            int value1 = 0;
            int value2 = 0;
            if(c1){
                value1 = c1->val;
            }
            if(c2){
                value2 = c2->val;
            }
            int sum = value1+value2+carry;
            if(sum>=10){
                int ans = sum%10;
                carry = sum/10;
                tail->next = new ListNode(ans);
                tail = tail->next;
            }
            else{
                tail->next = new ListNode(sum);
                tail = tail->next;
                carry = 0;
            }
            if(c1){
                c1 = c1->next;
            }
            if(c2){
                c2 = c2->next;
            }
            
        }
        if (carry) {
            tail->next = new ListNode(carry);
        }
        return dummy->next;
    }
};