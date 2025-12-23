class Solution {
  public:
    string printMinIndexChar(string S, string patt) {
        // Code here
        const int CHAR = 256;
        int arr[CHAR];
        fill(arr,arr+CHAR,-1);
        for(int i=0;i<S.length();i++){
            if(arr[S[i]]==-1){
                arr[S[i]] = i;
            }
        }
        int res = INT_MAX;
        for(int j = 0;j<patt.length();j++){
            if(arr[patt[j]]>=0){
            res = min(res,arr[patt[j]]);}
        }
        string result;
        result += (res != INT_MAX)? S[res] : '$';
        return result;
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