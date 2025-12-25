class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        int n = s1.length();
        if(s1.length()!=s2.length() || n<2){
            return false;
        }
        return ((s1+s1).find(s2)==2||(s1+s1).find(s2)==n-2);
    }
};
