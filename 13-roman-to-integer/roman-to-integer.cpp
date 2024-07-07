class Solution {
public:
         

    int romanToInt(string s) {


 int ans =0;
 int st =0;
  int e = s.length();

   while(st<e){

if (s[st] == 'I' && s[st+1] != 'V' && s[st+1]!='X'){
     ans= ans+1;
     st++;
}

if (s[st]=='I' && s[st+1]=='V'){
    ans = ans+4;
   st= st+2;
}

if (s[st]=='I' && s[st+1]=='X'){
    ans = ans+9;
    st=st+2;
}


if (s[st] == 'X' && s[st+1] != 'L' && s[st+1]!='C'){
     ans= ans+10;
     st++;

}

if (s[st]=='X' && s[st+1]=='L'){
    ans = ans+40;
    st=st+2;
}

if (s[st]=='X' && s[st+1]=='C'){
    ans = ans+90;
    st=st+2;
}

if (s[st] == 'C' && s[st+1] != 'D' && s[st+1]!='M'){
     ans= ans+100;
     st++;
}

if (s[st]=='C' && s[st+1]=='D'){
    ans = ans+400;
    st=st+2;
}

if (s[st]=='C' && s[st+1]=='M'){
    ans = ans+900;
    st=st+2;
}

if (s[st]=='V'){
    ans = ans+5;
    st++;
}

if (s[st]=='L'){
    ans = ans+50;
    st++;
}

if (s[st]=='D'){
    ans = ans+500;
    st++;
}

if (s[st]=='M'){
    ans = ans+1000;
    st++;
}
  }

  return ans ;
    }
};