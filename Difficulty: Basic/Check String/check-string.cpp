class Solution {
  public:
    bool check(string s) {
        // code here.
        char c = s[0];
        bool flag = true;
        for(int i=0;i<s.length();i++){
            if(s[i]!=c){
                flag =  false;
                break;
            }
        }
        
        return flag;
    }
};