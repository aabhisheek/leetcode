class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> arr={0,0,0};

        for(int i=0;i<bills.size();i++)
        {
            // if(bill[i]==5)
            //   arr[0]++;

            switch(bills[i])
            {
                case 5:
                arr[0]++;
                break;

                case  10:
                if(arr[0]==0)
                {
                    return false;
                }
                arr[0]--;
                arr[1]++;
                break;

                case 20:
                if((arr[0]>=1)&&(arr[1]>=1))
                {
                arr[0]--;
                arr[1]--;
                }

                else if(arr[0]>=3)
                arr[0]-=3;

                else 
                return false;

                
                break;
            }
         }
        return true;
    }
};