class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        //  code here
        const int CHAR = 256;
        int arr[CHAR];
        string res;
        fill(arr,arr+CHAR,0);
        for(int i =0;i<s1.size();i++){
            if(arr[s1[i]]==0){
            arr[s1[i]]++;
            }
        }
        for(int i =0;i<s2.size();i++){
            if(arr[s2[i]]==0){
                arr[s2[i]]--;
            }
            if(arr[s2[i]]==1){
                arr[s2[i]]=-2;
            }
            
        }
        for(int i =0;i<s1.size();i++){
            if(arr[s1[i]]!=0 && arr[s1[i]]!=-2){
                res += s1[i];
            }
        }
        for(int i =0;i<s2.size();i++){
            if(arr[s2[i]]!=0&&arr[s2[i]]!=-2){
                res += s2[i];
            }
        }
        if(res.length()>0){
        return res;}
        
        else {return "-1";}
    }
};