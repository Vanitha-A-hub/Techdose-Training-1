class Solution {
public:
    int maxArea(int h,int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int hsize = horizontalCuts.size(), vsize = verticalCuts.size();
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        long long int hmax = horizontalCuts[0], vmax = verticalCuts[0];
        for(int i=1; i<hsize; i++)
        {
            int diff = horizontalCuts[i]-horizontalCuts[i-1];
            if(diff>hmax)
                hmax = diff;
        }
        long long int diff = h-horizontalCuts[hsize-1];
        if(diff>hmax)
            hmax = diff;
        for(int i=1; i<vsize; i++)
        {
            int diff = verticalCuts[i]-verticalCuts[i-1];
            if(diff>vmax)
                vmax = diff;
        }
        diff = w-verticalCuts[vsize-1];
        if(diff>vmax)
            vmax = diff;
        return (hmax*vmax)%(1000000007);
    }
};
