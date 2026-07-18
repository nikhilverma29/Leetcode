class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* current = head;
        vector<ListNode*> vec;
        if(head == NULL){
            return;
        }
        while(current){
            vec.push_back(current);
            current = current->next;
        }
        int n = vec.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            vec[left]->next = vec[right];
            left++;
            vec[right]->next = vec[left];
            right--;
        }
        vec[left]->next = NULL;
    }
};
