class Solution {
public:
    bool isValid(string s) {
        stack <int> character;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                character.push(s[i]);
            }else{
                if(character.size() == 0){return false;}
                char t = character.top();
                if((t == '{' &&s[i] == '}') || (t == '[' &&s[i] == ']') || (t == '(' && s[i] == ')')){
                    character.pop();
                }else{
                    return false;
                }
            }
            
        }
                    if(character.size() == 0){
                return true;
            }
                return false;

    }
};