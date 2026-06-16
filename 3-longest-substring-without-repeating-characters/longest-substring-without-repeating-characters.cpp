class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int n = s.size();
        int maxwin = INT_MIN;
        unordered_set <char> characters;
        for(int i = 0;i<n;i++){
            while(characters.find(s[i]) != characters.end()){
                characters.erase(s[l]);
                l++;
            }
            if(characters.find(s[i]) == characters.end()){
                characters.insert(s[i]);
                maxwin = max(maxwin , i-l+1);
            }
            
        }
        return maxwin == INT_MIN?0:maxwin;
    }
};