class Solution {
public:
    bool isPalindrome(string s) {
    int low = 0,high = s.length()-1;
    while(low <= high){
        if(!((s[low] >= 65 && s[low]<= 90) || (s[low] >= 97 && s[low]<= 122)||(s[low] >= '0' && s[low] <= '9'))){
            low++;continue;
        }
        if(!((s[high] >= 65 && s[high]<= 90) || (s[high] >= 97 && s[high]<= 122)||(s[high] >= '0' && s[high] <= '9'))){
            high--;continue;
        }
        if (tolower(s[high]) != tolower(s[low])){
            return false;
        }
        else{
            low++;high--;
        }
    } 
    return true;
    }
};