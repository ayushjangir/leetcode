class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,n=nums.size(),high = n-1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) high = mid-1;
            else low = mid+1;
        }

        return -1; 
    }
};
