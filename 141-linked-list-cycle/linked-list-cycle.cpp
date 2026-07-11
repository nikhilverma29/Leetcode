class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        if(head->next==NULL){
            return false;
        }
        unordered_set<ListNode*> hash;
        ListNode* current = head;
        while(current!=NULL){
            hash.insert(current);
            current = current->next;
            if (hash.find(current) != hash.end()) {
                return true;
            }
            // else{
            //     return false;
            // }
        }
        return false;
    }
};