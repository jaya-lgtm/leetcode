class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long res=0;
        for(int x:nums)res^=x;
        long diff=res&(-res);
        int a=0,b=0;
        for(int x:nums){
            if(x&diff)a^=x;
            else b^=x;
        }
        return {a,b};
    }
};