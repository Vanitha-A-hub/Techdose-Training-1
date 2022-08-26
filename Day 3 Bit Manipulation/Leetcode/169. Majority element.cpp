class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, major = nums[0], n = nums.size();
        for(int i=1; i<n; i++)
        {
            if(count == 0)
            {
                count = 1;
                major = nums[i];
            }
            else if(nums[i] == major)
            {
                count += 1;
            }
            else
            {
                count -= 1;
            }
        }
        return major;
    }
};
