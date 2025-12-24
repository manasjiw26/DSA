// User function template for C++
class Solution {
  public:

    int search(string text, string pat) {
        // Your code goes here
        int j=0;
        for(int i=0;i<text.length();i++){
            if(text[i]==pat[j]){
                j++;
            }
            else{
                i = i-j;
                j=0;
            }
            if(j==pat.length()){
                return 1;
            }
        }
        if(j==pat.length()){
                return 1;
            }
            else{
                return 0;
            }
        
    }
};