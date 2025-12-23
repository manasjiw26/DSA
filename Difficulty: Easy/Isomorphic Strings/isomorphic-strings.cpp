class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        bool first =areiso(s1,s2);
        bool second = areiso(s2,s1);
        
        if (first == true && second == true){
            return true;
        }
        else{
            return false;
        }
    }
    bool areiso(string &s1, string &s2){
        unordered_map <char,char> s;
        if(s1.length()!=s2.length()){
        return false;    
        }
        for(int i = 0;i<s1.length();i++)
        {
            if(s.find(s1[i])!=s.end())
            {
                if(s[s1[i]] != s2[i])
                {
                    return false;
                }
            }
            else
            {
                s[s1[i]] = s2[i];
            }
        }
        return true;
    }
};