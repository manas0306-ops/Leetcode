class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long a=1LL*cost1*need1+1LL*cost2*need2;
        long long b=1LL*costBoth*max(need1,need2);
        long long c;
        if(need1>need2) {
            c=1LL*costBoth*need2+1LL*(need1-need2)*cost1;
        }
        else{
            c=1LL*costBoth*need1+1LL*(need2-need1)*cost2;
        }
        b=min(b,c);
        return min(a,b);
    }
};