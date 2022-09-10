class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map <char, int> smap;
        vector <string> temp;
        int num = words.size();
        for(int i=0; i<26; i++)
        {
            smap[order[i]] = i;
        }
        for(int i=0; i<num; i++)
        {
            int n = words[i].size();
            string s;
            for(int j=0; j<n; j++)
            {
                words[i][j] = smap[words[i][j]]+'a';
                s += words[i][j];
            }
            temp.push_back(s);
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<num; i++)
        {
            if(temp[i] != words[i])
                return false;
        }
        return true;
    }
};
