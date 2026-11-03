class Solution {
public:
    int solve(vector<int>& cost,vector<int>& dp,int n) {
        if(n==0 || n==1) return 0;
        if(dp[n]!=-1) return dp[n];
        int step1=cost[n-1]+solve(cost,dp,n-1);
        int step2=cost[n-2]+solve(cost,dp,n-2);
        return dp[n]=min(step1,step2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return solve(cost,dp,n);
    }
};