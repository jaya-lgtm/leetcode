class Solution {
public:
bool solve(int i,int jump,vector<int>stones,vector<vector<int>>&dp){
    if(dp[i][jump]!=-1) return dp[i][jump];
    if(i==stones.size()-1) return true;
    for(int nj=jump-1;nj<=jump+1;nj++){
        int nextposition=stones[i]+nj;
        for(int j=i+1;j<stones.size();j++){
            if(stones[j]>nextposition) break;
            if(stones[j]==nextposition){
                if(solve(j,nj,stones,dp)) return dp[i][jump]=true;
                break;
            }
        }
    }
    return dp[i][jump]=false;
    
}
    bool canCross(vector<int>& stones) {
        int n=stones.size();
       if(stones[1]!=1) return false;
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(1,1,stones,dp);
    }
};