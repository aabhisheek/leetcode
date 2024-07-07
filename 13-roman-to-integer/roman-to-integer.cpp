#include<string.h>
class Solution {
public:
    int romanToInt(string s) {
        int Roman(0);
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'I': 
                if (s[i + 1] == 'V'||s[i+1]=='X')
                {
                    Roman -= 1;
                    break;
                }
                else
                {
                    Roman += 1;
                    break;
                }
            case 'V':
            {
                Roman += 5;
                break;
            }
            case 'X':
            {
                if (s[i + 1] == 'L' || s[i + 1] == 'C')
                {
                    Roman -=10;
                    break;
                }
                else
                {
                    Roman += 10;
                    break;
                }
            }
            case 'L':
            {
                Roman += 50;
                break;
            }
            case 'C':
            {
                if (s[i + 1] == 'D' || s[i + 1] == 'M')
                {
                    Roman -= 100;
                    break;
                }
                else
                {
                    Roman += 100;
                    break;
                }
            }
            case 'D':
            {
                Roman += 500;
                break;
            }
            case 'M':
            {
                Roman +=1000;
                break;
            }
            }
        }
        return Roman;
    }
};