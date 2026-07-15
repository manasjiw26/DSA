class Solution {
public:
    string reverseWords(string s) {
        int firstchar=0,lastchar=s.size()-1;
        while(s[firstchar]==' '){
            firstchar++;
        }
        while(s[lastchar]==' '){
            lastchar--;
        }
       s = s.substr(firstchar, lastchar - firstchar + 1);
        reverse(s.begin(),s.end());
    int start = 0;
    for(int i = 0;i<s.size();i++){
        if(i>1 && s[i] == ' '&& s[i-1]==' '){
            s.erase(i,1);
            i--;
        }
        if(s[i] == ' ' && start != i){
            reverse(s.begin()+start,s.begin()+i);
            start = i+1;
        }
    }
    if (start < s.size())
    reverse(s.begin() + start, s.end());
    return s;
    }
};