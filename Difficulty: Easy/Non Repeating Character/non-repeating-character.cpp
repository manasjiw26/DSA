
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        const int CHAR = 256;
        int arr[CHAR];
        fill(arr,arr+CHAR,-1);
        for(int i=0;i<s.length();i++){
            if(arr[s[i]]>=0){
                arr[s[i]] = -2;
            }
            if(arr[s[i]]==-1){
                arr[s[i]] = i;
            }
        }
        int res = INT_MAX;
        for(int i=0;i<CHAR;i++){
            if(arr[i]>=0)
            {
                res = min(res,arr[i]);
            }
        }
        return (res == INT_MAX)? '$': s[res];
    }
    int min(int a,int b){
        if(a<=b){
            return a;
        }
        else{
            return b;
        }
    }
};