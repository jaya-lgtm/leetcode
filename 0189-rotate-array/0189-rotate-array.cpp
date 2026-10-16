class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int start=n-k;
        reverse(nums.begin(),nums.begin()+start);
        reverse(nums.begin()+start,nums.end());
        reverse(nums.begin(),nums.end());
    }
};