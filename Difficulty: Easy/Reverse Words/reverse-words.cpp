class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        int start = 0,end;
        string res;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                end = i-1;
                
                if(start<= end){
                    if(res.begin()!=res.end()){
                        res += '.';
                    }
                    res += reverse(s,start,end);
                }
                start = i+1;
            }
        }
        if(start<s.length()){
            if(res.begin()!=res.end()){
                        res += '.';
                    }
        res += reverse(s,start,s.length()-1);
        }
        return reverse(res,0,res.length()-1);
        
    }
    string reverse(string &s,int low,int high){
        string res;
        while(low<=high){
            res += s[high];
            high--;
        }
        return res;
    }
};