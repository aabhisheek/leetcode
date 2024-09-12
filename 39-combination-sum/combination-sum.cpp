class Solution {
public:
vector<vector<int>>  finalans;
     void recursion(int i,int target,vector<int> candidates, vector <int> ans,int sum)
     {
        //base case
        if(i==candidates.size())
        {
        if(target==0 )
        {
          finalans.push_back(ans);
        }
        return;
        }

        //keep picking same number
        if(candidates[i]<=target)
        {
          sum+=candidates[i];
          ans.push_back(candidates[i]);
          recursion(i,target-candidates[i],candidates,ans,sum);
          ans.pop_back();
          sum-=candidates[i];
        }

        //move to next index
        recursion(i+1,target,candidates,ans,sum);

     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int> ans;
        int sum=0;
        recursion(0,target,candidates,ans,sum);
        return finalans;
    }
};