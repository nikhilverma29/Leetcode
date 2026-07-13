class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* current = head;
        vector<int> arr;
        while(current){
            arr.push_back(current->val);
            current = current->next;
        }
        int n = arr.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            if(arr[left] != arr[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
           
        }
        return true;
    }
};