class Solution {
public:
    double myPow(double x, int n) {
        long long t = n;
        if(x == 1 || x == 0){
            return x;
        }
    if(t<0){
        x = 1/x;
        t = -t;
    }
    if(t == 0){
        return 1;
    }
    else if(t == 1){
        return x;
    }
    else if(t%2 == 0){
        return myPow((x*x) , t/2);
    }
    else{
        return (x * myPow(x ,t-1));
    }
    }
};