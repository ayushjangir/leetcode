class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;

            // check left part is sorted or not
            if(nums[low]<=nums[mid]){
                // figure out if target is in left part 
                if(nums[low]<= target && nums[mid]>=target)
                    high = mid-1; // in left part
                else low = mid+1; // in right part
            }

            // right part is sorted 
            else {
                // figure out if target is in right part 
                if(target >= nums[mid] && target <= nums[high])
                    low=mid+1; // left part eliminated
                else high = mid-1; // right part eliminated
            }
        }

        return -1;
    }
};
