class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int alpha[128] = {0};
        int start = 0, len = s.length();
        int result = 0;
        for(int i=0; i<len; i++)
        {
            if(alpha[s[i]] == 0)
            {
                alpha[s[i]] = i+1;
            }
            else
            {
                result = max(result, i-start);
                if(start<alpha[s[i]])
                    start = alpha[s[i]];
                alpha[s[i]] = i+1;
            }
        }
        result = max(result, len-start);
        return result;
    }
};
