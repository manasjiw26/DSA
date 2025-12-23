class Solution {
  public:
    string caseSort(string& s) {
        // code here
        string temp1,temp2;
        for(int i=0;i<s.length();i++){
            if(s[i]<=90){
                temp1 += s[i];
            }
            else{
                temp2 += s[i];
            }
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        int k=0,j=0;
        for(int i=0;i<s.length();i++){
        if(s[i]<=90){
            s[i] = temp1[k];
            k++;
        }   
        else{
            s[i] = temp2[j];
            j++;
        }
        }
        return s;
    }
};