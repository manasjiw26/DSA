class Solution {
  public:
    char firstRep(string s) {
        // code here.
        const int CHAR = 256;
        int res = -1;
        bool visited[CHAR];
        for(int i=s.length()-1;i>=0;i--){
            if(visited[s[i]]==true){
                res = i;
            }
            else{
                visited[s[i]]=true;
            }
        }
        if(res>=0){
            return s[res];
        }
        else{
            return '#';
        }
    }
};