class Solution {
  public:
    int modified(string& s) {
        //  code here
        int cons = 1,res=0;
        for(int i = 1;i<s.length();i++){
            if(s[i]==s[i-1]){
                cons++;
            }else{
                cons = 1;
            }
            if(cons == 3){
                cons = 0;
                res++;
                i--;
            }
        }
        return res;
    }
};