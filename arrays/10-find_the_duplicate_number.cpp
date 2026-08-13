class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow]; // 1 step
            fast = nums[nums[fast]]; // 2 steps
        } while(fast!=slow);

        fast = nums[0];

        while(fast!=slow){
            slow=nums[slow]; // 1 step
            fast=nums[fast]; // 1 step
        }

        return slow;
    }
};
