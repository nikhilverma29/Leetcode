class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }

        return dummy->next;
    }
};
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
//         if(h1==NULL && h2 ==NULL){
//             return NULL;
//         }
//         ListNode* c1 = h1;
//         ListNode* c2 = h2;
//         int x=0;
//         while(c1 && c2){
//             int sum = c1->val+c2->val+x;
//             if((sum)>=10){
//                 int ans = sum%10;
//                 int x = sum/10;
//                 ListNode* newhead = new ListNode(ans);
//             }
//             else{
//                 ListNode* newhead = new ListNode(sum);
//             }
//             ListNode* tail = newhead;
//             tail->next = new ListNode();
//             tail = tail->next;
//         }
//     }
// };

//i know that the placement of some of my lines are wrong, like the placement of tail node, and i tink even its initialosation is wrong. and still there are some lofical errors in the code coz the code is not behaving according to the logic i proposed.