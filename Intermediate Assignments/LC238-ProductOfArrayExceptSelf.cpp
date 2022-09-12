class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> fromBegin(n);
        vector<int> fromEnd(n);
        fromBegin[0] = 1, fromEnd[n-1] = 1;
        for(int i=1; i<n; i++)
        {
            fromBegin[i] = fromBegin[i-1]*nums[i-1];
            fromEnd[n-i-1] = fromEnd[n-i]*nums[n-i];
        }
        for(int i=0; i<n; i++)
        {
            res[i] = fromBegin[i]*fromEnd[i];
        }
        return res;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int p = 1, f = 0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0)
                f += 1;
            else 
                p *= nums[i];
        }
        for(int i=0; i<n; i++)
        {
            if(f>=1 && nums[i]!=0)
                result.push_back(0);
            else if(f>=2 && nums[i]==0)
                result.push_back(0);
            else if(nums[i] == 0 && f == 1)
                result.push_back(p);
            else
                result.push_back(p/nums[i]);
        }
        return result;
    }
};
