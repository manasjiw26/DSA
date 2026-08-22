class Solution {
public:
    int sumSquare(int n,unordered_set <int> &v){
        int sum = 0;
        while(n>0){
            int remainder = n%10;
            n = n/10;
            sum += remainder*remainder;
        }
        if(sum == 1){
            return 1;
        }else if(v.find(sum)!=v.end()){
            return 100;
        }
        else{
            v.insert(sum);
            return sumSquare(sum,v);
            
        }
    }
    bool isHappy(int n) {
        unordered_set <int> v;
        if(sumSquare(n,v) == 1){
            return true;
        }
        return false;
    }
};