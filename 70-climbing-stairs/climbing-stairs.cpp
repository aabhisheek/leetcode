class Solution {
public:
    int  recursion(int n,vector <int> &memo)
    {

        if(memo[n]!=-1)
        return memo[n];


        if(n<=2)
        return n;

        

        return memo[n]=recursion(n-1,memo)+recursion(n-2,memo);
    }
    
    
    int climbStairs(int n) {
        


        // recursion  plus memoize
        vector <int> memo(45+1,-1);
        

        int ans=recursion(n,memo);

        return ans;
        

            
    }
};