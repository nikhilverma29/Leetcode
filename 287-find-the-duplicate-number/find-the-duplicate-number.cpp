class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = 0;
        int fast = 0;

        // Phase 1: Find a meeting point inside the cycle
        do {
            slow = nums[slow];           
            fast = nums[nums[fast]];     
        } while (slow != fast);

        // Phase 2: Find the cycle entrance
        slow = 0;

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        // Cycle entrance = duplicate number
        return slow;
    }
};