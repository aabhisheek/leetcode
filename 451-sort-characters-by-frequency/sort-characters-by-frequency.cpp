#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string frequencySort(string s) {
          unordered_map <char,int> mpp;
          for(int i=0;i<s.size();i++)
          {
             mpp[s[i]]++;
          }
          vector<vector<int>> arr;   
          for(auto it:mpp)
          { 
            cout<<it.first<<it.second;
            arr.push_back({it.second,it.first});
          }


          sort(arr.begin(),arr.end(), greater<vector<int>>());

          for(int i=0;i<arr.size();i++)
          {
            for(int j=0;j<arr[i].size();j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
          }

           string ans;
          for(int i=0;i<arr.size();i++)
          {
            while(arr[i][0]!=0)
              { 
                ans.push_back(arr[i][1]);
                arr[i][0]--;
              }
          }

          return ans;
    }
};