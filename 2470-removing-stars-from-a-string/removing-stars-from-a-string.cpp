class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        string res = "";
        
        while (i < s.size()) {
            if (s[i] == '*') {
                res.pop_back();
            } else {
                res.push_back(s[i]);
            }
            i++;
        }
        return res;
    }
};