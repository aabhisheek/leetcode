class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;int left=0;int right=0;int zeroes=0;

        while(right< nums.size())
        {
            if(nums[right]==0)
                zeroes++;
            
            while(zeroes>k)
            {
                if(nums[left]==0)  zeroes--;

                left++;
            }

            if(zeroes<=k)  
            {
                int len=right-left+1;
                maxlen=max(len,maxlen);
            }
            right++;
        }
        return maxlen;
    }
};