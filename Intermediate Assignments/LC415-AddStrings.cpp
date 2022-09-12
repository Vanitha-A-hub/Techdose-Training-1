class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size()-1, n2 = num2.size()-1;
        int sum = 0;
        string res = "";
        while(sum || n1>=0 || n2>=0)
        {
            if(n1>=0)
            {
                sum += (num1[n1]-'0');
                n1--;
            }
            if(n2>=0)
            {
                sum += (num2[n2]-'0');
                n2--;
            }
            res += to_string(sum%10);
            sum /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
