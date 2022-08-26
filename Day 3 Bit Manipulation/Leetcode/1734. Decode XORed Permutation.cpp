class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        vector<int> result;
        int permXOR = 1, n = encoded.size()+1, encodXOR = encoded[1], start;
        for(int i=2; i<=n; i++)
        {
            permXOR ^= i;
        }
        for(int i=3; i<n-1; i+=2)
        {
            encodXOR ^= encoded[i];
        }
        result.push_back(encodXOR^permXOR);
        for(int i=0; i<n-1; i++)
        {
            result.push_back(encoded[i]^result[i]);
        }
        return result;
    }
};
