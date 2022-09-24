class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[low] <= nums[mid])
            {
                if(target >= nums[low] && target <= nums[mid])
                    high = mid-1;
                else
                    low = mid+1;
            }
            else
            {
                if(target >= nums[mid] && target <= nums[high])
                    low = mid+1;
                else
                    high = mid-1;
            }
        }
        return -1;
    }
};
/*
4,5,6,7,0,1,2 (a[low] <= a[mid])
5,1,2,3,4 (a[low] >= a[mid])
*/
