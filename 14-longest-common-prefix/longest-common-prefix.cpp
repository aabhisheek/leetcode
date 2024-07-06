class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort(strs.begin(),strs.end());
        // int a=strs.size();
        // string n=strs[0],m=strs[a-1],ans="";
        // for(int i=0;i<n.size();i++){
        //     if(n[i]==m[i]){ans+=n[i];}
        //     else break;
        // }
        // return ans;
        cout<<endl;
        string str=strs[0];
        int i=0;int ans=-1;int j=0;int broke=0;
        while(i<strs[0].size())
        {     
                j=0;
               while(j<strs.size()-1)
               {
                string ab1,ab2;
                ab1=strs[j];ab2=strs[j+1];
                cout<<ab1<<"   "<<ab2<<"  i value  "<<i<<"  j value  "<<j<<endl;
                if((i>ab1.size())||(i>ab2.size()))
                {
                broke=-1;
                break;
                }
                if(ab1[i]!=ab2[i])
                {   
                    cout<<"not equal   "<<ab1<<"   "<<ab2<<"  i value  "<<i<<"  j value  "<<j<<endl;
                    cout<<ab1[i]<<"  "<<ab2[i]<<"  "<<endl;
                    ans=i;
                    broke=-1;
                    break;
                }
                j++;
               }
               if(broke==-1)
               break;
            i++;
        
        }
        ans=ans-1;
        if(ans==-1)
        {
          return "";
        }
        else
        return  str.substr(0,ans+1); 

            
        }
        
        
};
