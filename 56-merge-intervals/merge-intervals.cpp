class Solution {
public:
       vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        vector<vector<int>> merge;
        
        sort(intervals.begin(),intervals.end());
        
        if(intervals.size()<=1)
        {
            return intervals;
        }
               
         int i=0;
         for(;i <intervals.size()-1; )  
        {   
       
        
            if(intervals[i][1]>=intervals[i+1][0])
            {
                intervals[i][1]=max( intervals[i][1],intervals[i+1][1]);
                //  intervals[i][1]=intervals[i+1][1];
                intervals.erase(intervals.begin() + i + 1);    
            } 
            else
            {   
                i++;
            }
            
         
        }
   
      return intervals;  
    }
};