class Solution {
public:
    int recursion(int n,vector<int> &memo)
    {
         if(memo[n]!=-1)
         return memo[n];

         if(n<=2)
         return memo[n]=n;

         return memo[n]=recursion(n-1,memo)+recursion(n-2,memo);
    }
    int climbStairs(int n) {
        //  if(n<=2)
        //  return n;


        //  return climbStairs(n-1)+climbStairs(n-2);


        vector<int> memo(45+1,-1);
        int ans=recursion(n,memo);

        return ans;
    }
};