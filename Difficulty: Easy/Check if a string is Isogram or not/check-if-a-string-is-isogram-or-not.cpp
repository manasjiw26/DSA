class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        const int CHAR = 256;
        int arr[CHAR];
        fill(arr,arr+CHAR,0);
        for(int i=0;i<s.length();i++){
            arr[s[i]]++;
        }
        for(int i=0;i<CHAR;i++){
            if(arr[i]>1){
                return false;
            }
        }
        return true;
    }
};