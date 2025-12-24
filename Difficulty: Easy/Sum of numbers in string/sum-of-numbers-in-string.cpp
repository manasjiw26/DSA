class Solution {
  public:
    int findSum(string& s) {
        // code here
        int res = 0,x=0,t=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                x = x*t*10 + s[i] - 48;
                t=1;
            }
            else{
                res += x;
                t=0;
                x=0;
            }
        }
        res += x;
        return res;
    }
};