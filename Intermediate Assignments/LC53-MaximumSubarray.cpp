class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int meh = nums[0];
        int msf = nums[0];
        int n = nums.size();
        for(int i=1; i<n; i++)
        {
            meh += nums[i];
            if(nums[i] > meh)
                meh = nums[i];
            if(meh > msf)
                msf = meh;
        }
        return msf;
    }
};
