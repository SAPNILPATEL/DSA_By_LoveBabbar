// Author @Sapnil Patel
// Date:-27/12/22

//*********************** Que-1 :- Reverse the String *****************************

#include<bits/stdc++.h>
using namespace std;
// string reverseString(string s)
// {
//     string temp = "";
//     string res = "";

//     for(int i = 0;i<s.length();i++)
//     {
//         if(s[i]==' ')
//         {
//             temp = temp + s[i];
//             res =  temp + res ;
//             temp = "";
//         }
//         else
//         {
//             temp = temp + s[i];
//         }
//     }
//     res =  temp +' '+ res ;
//     return res;
// }
// int main()
// {
//     string s = "the sky is blue";
//     string a = string reverseString(s);
//     cout<<a<<endl;
//     return 0;
// }


//********************** Que-2:- Maximum Occuring character in the string **********************************

char findMaxOccuringChar(char str[]){
   int freq[26] = { 0 };
   int maxFreq = -1;
   char maxFreqChar;
   int len = strlen(str);
   for (int i = 0; i < len; i++)
      freq[str[i] - 'a']++;
   for (int i = 0; i < 26; i++)
      if (maxFreq < freq[i]) {
         maxFreq = freq[i];
         maxFreqChar = (char)(i + 'a');
      }
   return maxFreqChar;
}
int main(){
   char str[] = "sssaap";
   cout<<"Maximum occurring character of input string is : "<<findMaxOccuringChar(str);
   return 0;
}