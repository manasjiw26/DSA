// User function Template for C++
class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        // your code here
        int j = 0;
        for(int i=0;i<txt.length();i++){
            if(txt[i] == pat[j]){
                j++;
            }
            else{
                i=i-j;
                j=0;
            }
            if(j==pat.length()){
                return true;
            }
        }
        if(j==pat.length()){
                return true;
            }
            else{
                return false;
            }
    }
};
