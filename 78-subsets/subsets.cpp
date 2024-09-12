class Solution {
public:
vector<vector<int>>  finalans;
    void recursion(int index,vector<int> nums,vector<int> ans)
    {
        //base case
        int n=nums.size();
        if(index==n)
        {
            finalans.push_back(ans);
            return;
        }


        //pick
         ans.push_back(nums[index]);
         recursion(index+1,nums,ans);
         ans.pop_back();

        //notpick
         recursion(index+1,nums,ans);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
         recursion(0,nums,ans);
        return finalans;
    }
};