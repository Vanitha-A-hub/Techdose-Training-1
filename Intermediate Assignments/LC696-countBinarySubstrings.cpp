class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0, curr = 1, res = 0, size = s.length();
        for(int i=1; i<size; i++)
        {
            if(s[i] == s[i-1])
                curr++;
            else
            {
                res += min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }
        return res+min(curr, prev);
    }
};
