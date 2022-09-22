class Solution {
public:
    static int quickSelect(vector<int> &nums, int low, int high, int k)
    {
        int i = low-1, j = low;
        while(j < high)
        {
            if(nums[j] <= nums[high])
            {
                i++;
                swap(nums[i], nums[j]);
            }
            j++;
        }
        i++;
        swap(nums[i], nums[high]);
        if(i == k)
            return nums[i];
        else if(i < k)
        {
            return quickSelect(nums, i+1, high, k);
        }
        else
        {
            return quickSelect(nums, low, i-1, k);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int res = quickSelect(nums, 0, nums.size()-1, nums.size()-k);
        return res;
    }
};
