class Solution {
  public:
    int minIndexChar(string &s1, string &s2) {
        //  code here
        const int CHAR = 256;
        int arr[CHAR];
        fill(arr,arr+CHAR,-1);
        for(int i=0;i<s1.length();i++){
            if(arr[s1[i]]==-1){
                arr[s1[i]] = i;
            }
        }
        int res = INT_MAX;
        for(int j = 0;j<s2.length();j++){
            if(arr[s2[j]]>=0){
            res = min(res,arr[s2[j]]);}
        }
        return (res != INT_MAX)? res : -1;
        
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