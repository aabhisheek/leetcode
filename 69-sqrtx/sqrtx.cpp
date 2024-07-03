class Solution {
public:
    int mySqrt(int x) {
        long long low=1;int high=x;long long mid=1,ans=1;

        if((x==0)||(x==1))
        return  x;
        
        while(low<=high)
        {
            mid=(low+high)/2;
            

            if((mid*mid)<=x)
            {   
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};