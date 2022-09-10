class Solution {
public:
    static bool sortcl(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[0] < v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> nonOP;
        sort(intervals.begin(), intervals.end(), sortcl);
        int start = intervals[0][0], end = intervals[0][1];
        for(vector<int> pairs : intervals)
        {
            if(pairs[0]<=end && pairs[1]>=start)
                end = max(end, pairs[1]);
            else
            {
                vector <int> join;
                join.push_back(start);
                join.push_back(end);
                nonOP.push_back(join);
                start = pairs[0], end = pairs[1];
            }
        }
        vector <int> join;
        join.push_back(start);
        join.push_back(end);
        nonOP.push_back(join);
        return nonOP;
    }
};

//1,3 2,6 5,9 12,14
