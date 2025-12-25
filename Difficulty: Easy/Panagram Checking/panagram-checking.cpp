class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        const int CHAR = 256;
        int isPresent[CHAR];
        fill(isPresent,isPresent+CHAR,0);
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                isPresent[s[i]+32]++;
            }
            else{
                isPresent[s[i]]++;
            }
        }
        bool flag = true;
        for(int i=97;i<=122;i++){
            if(isPresent[i]==0)
            {
                flag  = false;
                break;
            }
            
        }
        return flag;
    }
};