class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i] < 0)
                nums[i] = 0;
        }
        for(int i=0; i<n; i++)
        {
            int k = abs(nums[i])-1;
            if(k>=0 && k<n)
            {
                if(nums[k] == 0)
                    nums[k] = -1*(n+1);
                if(nums[k] > 0)
                    nums[k] = -1*nums[k];
            }
        }
        for(int i : nums)
            cout<<i<<" ";
        for(int i=1; i<=n; i++)
        {
            if(nums[i-1] >= 0)
                return i;
        }
        return n+1;
    }
};
