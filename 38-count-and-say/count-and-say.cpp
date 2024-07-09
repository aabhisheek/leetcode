class Solution {
public:
    string countAndSay(int n) {
          string num="1";
          while(n>=2)
          {
            num=rle(num);
            n--;
          }
          return num;  
    }

     string rle(string num)
    {   
        int i=0;int count=0;string ans="";char ch;
        while(i<num.size())
        {    
            ch='\0'; 
            if((i<=num.size()-2)&&(num[i]==num[i+1]))
            {  
                count=1;ch='\0';
                while((i<=num.size()-2)&&(num[i]==num[i+1]))
                {
                      count++;
                      i++;
                }
                 ch='0'+count;
                ans.push_back(ch);
                ch=num[i];
                ans.push_back(ch);
                i++;
            }
            else
            { 
                ch='1';
                ans.push_back(ch);
                ch=num[i];
                ans.push_back(ch); 
                i++;
            }

            
        }
        return ans;
    } 


};
