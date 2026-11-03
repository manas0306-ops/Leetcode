class Solution {
public:
    int solve(vector<int>& nums,vector<int>& dp,int i,int n) {
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        int loot=nums[i]+solve(nums,dp,i+2,n);
        int skip=solve(nums,dp,i+1,n);
        return dp[i]=max(loot,skip);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>dp(n+1,-1);
        vector<int>dpp(n+1,-1);
        return max(solve(nums,dp,0,n-2),solve(nums,dpp,1,n-1));
    }
};