class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> result;
        priority_queue<vector<int>> maxHeap;
        for(auto p : points)
        {
            int element = p[0]*p[0] + p[1]*p[1];
            maxHeap.push({element, p[0], p[1]});
            if(maxHeap.size() > k)
                maxHeap.pop();
        }
        for(int i=0; i<k; i++)
        {
            vector <int> top = maxHeap.top();
            maxHeap.pop();
            result.push_back({top[1], top[2]});
        }
        return result;
    }
};
