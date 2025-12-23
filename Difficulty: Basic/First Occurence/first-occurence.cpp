class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int j=0,res = INT_MAX;
        for(int i=0;i<txt.length();i++){
            j=0;
            int k = i;
            while(txt[k]==pat[j] && k<txt.length()){
                k++;j++;
            }
            if(j==pat.length())
            {
                return i;
            }
        }
        return -1;
    }
};