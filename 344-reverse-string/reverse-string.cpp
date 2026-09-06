class Solution {
public:
    void reverseString(vector<char>& s) {
        int low = 0,high = s.size()-1;
        reverse(s,low,high);
    }
    void reverse(vector<char>& s,int low,int high){
        if(low>=high){
            return;
        }
        int temp = s[low];
        s[low] = s[high];
        s[high] = temp;
        reverse(s,low+1,high-1);
    }
};