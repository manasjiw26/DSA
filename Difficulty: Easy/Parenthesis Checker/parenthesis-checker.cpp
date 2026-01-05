class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack <char> c;
        for(int i = 0;i<s.length();i++){
            // if(s[i]=='{'||s[i]=='('||s[i]=='['){
                
            // }else{
                if(c.empty()!=true){
            if(c.top() == '['&&s[i] == ']'){
                c.pop();
            }
            else if(c.top() == '{'&&s[i] == '}'){
                c.pop();
            }
            else if(c.top() == '('&&s[i] == ')'){
                c.pop();
            }
            else{
                c.push(s[i]);
            }
            // }
            }
            else{
                c.push(s[i]);
            }
        }
        if(c.size()!=0){
            return false;
        }
        return true;
    }
};