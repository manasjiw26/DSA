class Solution {
public:
    string simplifyPath(string path) {
        string s;
        stack <string> finalPath;
        for(int i = 1;i<path.size();i++){
            if(path[i] == '/' ){
                while(i<path.size() && path[i] == '/' ){
                    i++;
                }
                i--;

            if(s == ".."){
                if(finalPath.size()!=0){finalPath.pop();}
                s = "";}
            else if(s == "."){
                s = "";
            }
            else{
                if(s.size()!=0){finalPath.push(s);}
                
                s="";
            }
            }
            
            else{
                s += path[i];
            }
        }
        if(s.size()!=0){
            if(s == ".."){
                if(finalPath.size()!=0){finalPath.pop();}
                s = "";}
            else if(s == "."){
                s = "";
            }
            else{
                finalPath.push(s);
                s="";
            }
        }
        string res;
        while(finalPath.size()!=0){
            res = '/' + finalPath.top() + res;
            finalPath.pop();
        }
        if(res.size() == 0){
            res = "/";
        }
        return res;
    }
};