class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxwidth = 0,low = 0;
        int n = s.size();
        if(n<2){
            return n;
        }
        unordered_set <char> ch;
        for(int i = 0;i<n;i++){
            if(ch.find(s[i]) == ch.end()){
                ch.insert(s[i]);
            }else{
                
                maxwidth = max(maxwidth,(i-low));
                while(s[low]!=s[i] && low<i){
                    ch.erase(s[low]);
                    low++;
                }low++;
            }
            
        }
        maxwidth = max(maxwidth,(n-low));
        return maxwidth;
    }
};