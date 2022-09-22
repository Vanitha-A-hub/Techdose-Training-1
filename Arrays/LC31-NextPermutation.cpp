class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int peakIdx = -1, minIdx, n = nums.size();
        for(int i=n-1; i>=1; i--)
        {
            if(peakIdx == -1 && nums[i] > nums[i-1])
            {
                peakIdx = i;
            }
            if(peakIdx != -1 && nums[peakIdx] > nums[i])
            {
                minIdx = i;
                break;
            }
        }
        if(peakIdx == -1)
        {
            sort(nums.begin(), nums.end());
            return;
        }
        for(int i=peakIdx; i<n; i++)
        {
            if(nums[i] < nums[peakIdx] && nums[i] > nums[minIdx])
            {
                peakIdx = i;
            }
        }
        int temp = nums[minIdx];
        nums[minIdx] = nums[peakIdx];
        nums[peakIdx] = temp;
        sort(nums.begin()+minIdx+1, nums.end());
        return;
    }
};
