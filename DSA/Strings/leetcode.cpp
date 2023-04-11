#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

//  string reorganizeString(string s) {
//        //count hash

//        int hash[26]={0};
//        for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//        }
//        //find max frequence element

//        char max_freq_char;
//        int max_freq=INT_MIN;
//        for(int i=0; i<26;i++){
//         if(hash[i] > max_freq){
//             max_freq=hash[i];
//             max_freq_char=i+'a';
//         }
//        }
//    //place the max_freq_char

//        int index=0;
//       while(max_freq>0 && index<s.size()){
//       s[index]=max_freq_char;
//       max_freq--;
//       index+=2;
//       }

//       //exit condition

//       if(max_freq !=0){
//           return " ";
//       }
      

//       //most_freq charecter 0 ho gya 

//         hash[max_freq_char - 'a']=0;

//         //lets palce the rest of the charecter

//         for(int i=0; i<26; i++){
//         while(hash[i]>0){

//       //if index is out of bound put index 
         
//           index=index >=s.size() ? 1 :index;
//           s[index] =i+'a';
//             hash[i]--;
//             index+=2;
//         }
//         }
//         return s;//)(n)
//  }
  

// //time complexity :0(n)
// //Space complexity :0(1)
//    string longestCommonPrefix(vector<string>& strs) {
        
//   string ans;
//   int i=0;
//   while(true){

//     char curr_ch =0;
//     for(auto str: strs){
//         //out of bound
//         if(i >=str.size()){
//             curr_ch=0;
//             break;
//         }
//         //just started
//        if(curr_ch==0){
//         curr_ch=str[i];
//        }
//        else if(str[i]!= curr_ch){
//         curr_ch=0;
//         break;
//        }
//     }
// //exit of while loop
//     if(curr_ch==0){
//         break;
//     }

//     ans.push_back(curr_ch);
//     i++;
//   }

// return ans;
        
//     }
//    int strStr(string haystack, string needle) {
//         int n=haystack.size();
//         int m=needle.size();

//         for(int i=0; i<=n-m;i++){
//             for(int j=0; j<m; j++){
//                 if(needle[j] != haystack[i+j]){
//                     break;
//                 }
//                 if(j== m-1){
//                     return i;
//                 }
//             }
//             return -1;
//         }
//     }
string convert(string s, int numRows) {
        if(numRows==1) return s;

        vector<string>zigzag(numRows);
        int i=0, row=0;
        bool direction =1; //T->B

        while(true){
            if(direction){
                while(i<s.size() && row<numRows ){
                    zigzag[row++].push_back(s[i++]);

                }
                row=numRows-2;
            }
            else{
                while(i<s.size() && row>=0){
                    zigzag[row--].push_back(s[i++]);
                }
                row=1;
            }
        
            if(i>=s.size())
            break;
        
            direction=!direction;
        }
            string ans="";
             for(int i=0; i<zigzag.size();i++){
                ans+=zigzag[i];
             }
               return ans;    
    }
};