class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n*t;i++){
            int digit=1;
            int n=i;
            while(n>0){
                 digit*=n%10;
            n=n/10;
            }
            if(digit%t==0) return i;
        }
        return 0;
    }
};