class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.length()!=s2.length())
        {
            return false;
        }
        const int CHAR =256;
        int arr[CHAR];
        fill(arr,arr+CHAR,0);
        for(int i=0;i<s1.length();i++){
            arr[s1[i]]++;
            arr[s2[i]]--;
        }
        for(int i=0;i<CHAR;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};