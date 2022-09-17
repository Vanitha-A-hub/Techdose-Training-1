class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length(), min = INT_MIN, max = INT_MAX, sign = 1;
        long long int result = 0;
        while(s[i] == ' ')
        {
            i++;
        }
        if(s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(s[i] == '+')
            i++;
        for(; i<n; i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
               if(result >  INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > 7)) 
               {
                   if (sign == 1)
                       return INT_MAX;
                   else 
                       return INT_MIN;
               }
                result = result*10 + (s[i]-'0');
            }
            else
            {
                break;
            }
        }
        if(sign == -1)
            result = result*(-1);
        return result;
    }
};
