
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i =0;
        int j=n-1;

    for(int t=0; t<n; t++){
        if(s[t]>='A' && s[t]<= 'Z'){
        s[t] = s[t] - 'A'+'a';
        }
    }
     
        while(i<j){
            if(s[i]>= 'a' &&s[i]<='z' || s[i]>= '0' &&s[i]<='9'){
            }
            else{
                i++;
                continue;
            }
            if(s[j]>= 'a' &&s[j]<='z' || s[j]>= '0' &&s[j]<='9') {
            }
            else{
                j--;
                continue;
            }
            if(s[i]!=s[j]){
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};