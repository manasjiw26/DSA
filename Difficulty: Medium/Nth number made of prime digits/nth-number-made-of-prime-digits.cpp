class Solution {
  public:
    int primeDigits(int n) {
        // code here
        int x=0,res=0,i=0;
        int prime[] = {2,3,5,7};
        while(n>0){
            n--;
            x = n % 4;
            n=n/4;
            res = prime[x]*pow(10,i) + res;
            i++;
        }
        return res;
    }
};