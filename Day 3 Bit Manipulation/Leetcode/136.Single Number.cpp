class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorsum = 0;
        for(int i : nums)
        {
         xorsum ^= i;   
        }
        return xorsum;
    }
};
