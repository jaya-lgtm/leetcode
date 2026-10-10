class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        long res=1;
        while(res<n){
            res=res*3;
        }
        if(res==n) return true;
        return false;
        
    }
};