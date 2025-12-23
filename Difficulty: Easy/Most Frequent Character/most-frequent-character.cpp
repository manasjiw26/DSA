class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        const int CHAR = 256;
        int arr[CHAR];
        fill(arr,arr+CHAR,0);
        for(int i = 0;i<s.length();i++){
            arr[s[i]]++;
        }
        int res = 0,t;
        for(int i = 0;i<CHAR;i++){
            if(res<arr[i]){
            res = arr[i];
            t=i;
            }
        }
        return (char)t;
    }
    
};