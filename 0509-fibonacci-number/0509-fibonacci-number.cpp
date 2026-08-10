class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
       int p=0,p1=1;
       for(int i=2;i<=n;i++){
        int c=p+p1;
        p=p1;
        p1=c;
       }
       return p1;
    }
};