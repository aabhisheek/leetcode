class Solution {
public:
    long long myAtoi(string s) {
        long long num=0;int ans=0;
        for(int i=0;i<s.size();i++)
        {  
            if((i==0)&&(s[i]==' ')) //whitespace handling
             {
                while(s[i]==' '){
                i++;
                }
                ans=i;
             }

            if(i==ans)   //signhandling1
            {
            if(s[i]=='-')
             continue; 
             if(s[i]=='+')
             continue;

            }

             
            
            if((s[i]>='0')&&(s[i]<='9'))//formingnumber
            {    
                 num=num*10+(s[i]-'0');//forming the number
                 cout<<num<<endl;

                
                if(num>INT_MAX)//overflow handling
                {
                    if(s[ans]=='-')//signhandling2a
                    {   
                        cout<<num;
                        return INT_MIN;
                    }
                    else
                    {
                        cout<<num;
                        return INT_MAX;
                    }
                }
                   

                // num=num*10+(s[i]-'0');//forming the number
                // cout<<num<<endl;
           
            }
            else 
             break;
              
        }
        if(s[ans]=='-')//signhandling2b
        {
            num=-num;
        }
         
         
         cout<<num;
         return num;
    }

};