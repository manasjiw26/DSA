class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        stack <char> v;
        for(int i=s.length()-1;i>=0;i--){
            if(v.empty() == true){
                v.push(s[i]);
            }
            else{
            if(v.top()!=s[i]){
                v.push(s[i]);
            }}
        }
        string res="";
        while(v.empty()!=true){
            res += v.top();
            v.pop();
        }
        return res;
    }
};