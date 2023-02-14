class Solution {
public:
    int climbStairs(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (n==2) return 2;

        int oldWay1 = 1;
        int oldWay2 = 2;
        int way;
        
        for (int i=3; i <=n; i++) {
            //DP[i] = DP[i-1] + DP[i-2];
            way = oldWay1 + oldWay2;
            oldWay1 = oldWay2;
            oldWay2 = way;
        }
        return way;
    }
};
