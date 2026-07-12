class Solution {
public:
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        ListNode* currenta = heada;
        ListNode* currentb = headb;
        unordered_set<ListNode*> hash;
        while(currenta){
            hash.insert(currenta);
            currenta = currenta->next;
        }
        while(currentb){
            if (hash.find(currentb) != hash.end()) {
                return currentb;
            }
            else{
                currentb = currentb->next;
            }
        }
        return NULL;
    }
};