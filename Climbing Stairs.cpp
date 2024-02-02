class Solution {
    int dp[46];  // Assuming stairs <= 45 based on the problem statement
    
public:
    int climbStairs(int stairs) {
        // Base cases
        if (stairs <= 3) {
            return dp[stairs] = stairs;
        }
        
        // Memoization
        if (dp[stairs] != 0) {
            return dp[stairs];
        }
        
        // Recursion
        return dp[stairs] = (climbStairs(stairs - 1) + climbStairs(stairs - 2));
    }
};
