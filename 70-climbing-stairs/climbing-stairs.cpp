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

    int dp(int n)
    {
         vector<int> memo(45+1,-1);
         memo[1]=1;
         memo[2]=2;
        
        for(int i=3;i<=n;i++)
        {
            memo[i]=memo[i-1]+memo[i-2];
        }

        return memo[n];
         
    }
    int climbStairs(int n) {
        //  if(n<=2)
        //  return n;


        //  return climbStairs(n-1)+climbStairs(n-2);


        // vector<int> memo(45+1,-1);
        // int ans=recursion(n,memo);

        int ansdp=dp(n);

        return ansdp;
    }
};