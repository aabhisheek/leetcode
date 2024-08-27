class Solution {
public:
    string reformatDate(string date) {
        
        string word="";
        string day="";
        string month="";
        string year="";
        int wordcount=0;
        for(int i=0;i<date.size();i++)
        {
            if(date[i]!=' ')
            {
               word+=date[i]; 
            }
            else
            {
               //word formed already
               if(wordcount==0)
               day=word;
               else  if(wordcount==1)
                month=word;
                else if(wordcount==2)
                year=word;

                word="";
                wordcount++;
            }
        }
        if(word!="")
        {
            if(wordcount==2)
                year=word;

                word="";
                wordcount++;
        }

        cout<<"day "<<day<<endl;
         cout<<"month "<<month<<endl;
          cout<<"year "<<year<<endl;
          //collected successfully

           string formatdate="";
           string formatmon="";
           //year need no formatting


          //day format
          int i=0;
          for(i=0;i<day.size();i++)
          {
            if(!(day[i]>=97 && day[i]<=122))
            {
                formatdate+=day[i];
            }
            else
            {
                break;
            }
          }
          if(i==1)
          formatdate="0"+formatdate;

          
          cout<<"formatday "<<formatdate<<endl;

          //month format
          map <string,string > mpp;
          mpp["Jan"]="01";
          mpp["Feb"]="02";
          mpp["Mar"]="03";
          mpp["Apr"]="04";
          mpp["May"]="05";
          mpp["Jun"]="06";
          mpp["Jul"]="07";
          mpp["Aug"]="08";
         mpp["Sep"]="09";
          mpp["Oct"]="10";
          mpp["Nov"]="11";
          mpp["Dec"]="12";

          formatmon=mpp[month];

          cout<<"formatmonth "<<formatmon<<endl;
         
        
       return (year+"-"+formatmon+"-"+formatdate); 
    }
};