class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() <= numRows){
            return s;
        }
        string res;
        int diff =  (numRows-1)*2;
        int n = s.size();
        int k = diff,m = 0;
        for(int i=0;i<numRows;i++){
            int pointer = i;
            res += s[pointer];
            while(pointer<n){
                if((pointer+k) < n){if(k!=0){res += s[pointer+k];
                pointer+=k;}}else{break;}
                if((pointer+m) < n){if(m!=0){res += s[pointer+m];
                pointer+=m;}}else{break;}
            }
            k=k-2;
            m=m+2;
        }
        return res;
    }
};