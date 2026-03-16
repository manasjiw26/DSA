class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = word1.length();
        int j = word2.length();
        int k = 0,s = 0;
        string t = "";
        while(k<i && s<j){
            t = t + word1[k] + word2[s];
            k++;s++;
        }
        while(k<i){
            t = t + word1[k];
            k++;
        }
        while(s<j){
            t = t + word2[s];
            s++;
        }
        return t;
    }
};