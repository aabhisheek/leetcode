class Solution {

public:
vector<string> finalans;
    void recursion (int index,string digits,map<char,vector<char>> mpp,string ans)
    {
        if(index==digits.size())
        {
          finalans.push_back(ans);
          return;
        }

        
           char ch=digits[index];
           vector<char> chars=mpp[ch];

           for(int i=0;i<chars.size();i++)
           {   
               ans.push_back(chars[i]);
               recursion(index+1,digits,mpp,ans);
               ans.pop_back();
           }
        

    }

    vector<string> letterCombinations(string digits) {
       
        map<char,vector<char>> mpp;
        mpp['2']={'a','b','c'};
        mpp['3']={'d','e','f'};
        mpp['4']={'g','h','i'};
        mpp['5']={'j','k','l'};
        mpp['6']={'m','n','o'};
        mpp['7']={'p','q','r','s'};
        mpp['8']={'t','u','v'};
        mpp['9']={'w','x','y','z'};
        

         if(digits.size()==0)
            return {};
        // for(int i=index;i<digits.size();i++)
        // {
        //    char ch=digits[i];
        //    vector<char> chars=mpp[ch];
        //    string ans="";

        //    for(int i=0;i<chars.size();i++)
        //    {
        //      ans.push_back();
        //    }
        // }
        string ans="";
        recursion(0,digits,mpp,ans);
        return finalans;
    }
};