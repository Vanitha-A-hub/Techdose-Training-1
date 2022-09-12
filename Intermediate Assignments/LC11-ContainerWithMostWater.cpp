class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int max = -1;
        while(left<right)
        {
            int area;
            if(height[left]<height[right])
            {
                area = height[left]*(right-left);
                left += 1;
            }
            else
            {
                area = height[right]*(right-left);
                right -= 1;
            }
            if(area>max)
                max = area;
        }
        return max;
    }
};
