class Solution {
public:
    int romanToInt(string s) {
        map<char,int>map;
        map['I'] =1;
        map['V'] =5;
        map['X'] =10;
        map['L'] =50;
        map['C'] =100;
        map['D'] =500;
        map['M'] =1000;
        int j =s.length()-1;
        int number =0;
        while(j>=0){
            if(number==0){
                number = map[s[j]];
            }
            else if(map[s[j]]<map[s[j+1]]){
              number -=map[s[j]];
            }else{
            number +=map[s[j]];
            }
            j--;
            cout<<number<<" ";
        }
    return number;
    }
};