class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> s;
        for(int i = 0;i<tokens.size();i++){
            int num = 0;
            if(tokens[i] != "+" && tokens[i] != "*" && tokens[i] != "-" && tokens[i] != "/"){
                num = stoi(tokens[i]);
                s.push(num);
            }else{
                int a,b;
                if(s.size()!=0){b= s.top();
                s.pop();}
                if(s.size()!=0){a = s.top();
                s.pop();}

                if(tokens[i] == "+"){s.push(a+b);}
                else if(tokens[i] == "-"){s.push(a-b);}
                else if(tokens[i] == "*"){s.push(a*b);}
                else if(tokens[i] == "/"){s.push(a/b);}
                else{}
            }
            
        }
        if(s.size()!=0){
        return s.top();}
        return -1;

    }
};