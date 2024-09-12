class Solution {
public:
 vector<vector<int>> finalans;
 vector<int> ans;
     void recursion(int idx,int target,vector<int>  candidates)
     {  
        //  sort(candidates.begin(),candidates.end());
        //base case
        if(target<=0)
        {
            if(target==0)
              finalans.push_back(ans); 

              return;
        }


         
         for(int i=idx;i<candidates.size();i++)
         {
            if(i>idx && candidates[i]==candidates[i-1])
            continue;
            
            if(candidates[i]>target)
            break;
            
            ans.push_back(candidates[i]);
            recursion(i+1,target-candidates[i],candidates);
            ans.pop_back();
         }
     }


     vector<vector<int>> combinationSum2(vector<int>& candidates,int target) {
        sort(candidates.begin(),candidates.end());
        
         recursion(0,target,candidates);

         return finalans;
    }
};