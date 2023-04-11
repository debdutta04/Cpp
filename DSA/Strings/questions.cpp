#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int expandIndex(string s,int i,int j){

int count=0;
while(i>=0 && j<s.length() && s[i]==s[j]){
    count++;
    i--;j++;
}
return count;
}
    int countSubstrings(string s) {
        int totalCount=0;
        int n=s.length();

        for(int i=0; i<n;i++){
            //odd
            int oddKaAns=expandIndex(s,i,i);
            totalCount=totalCount+oddKaAns;
            //even
             int evenKaAns=expandIndex(s,i,i+1);
              totalCount=totalCount+evenKaAns;
        }
        return totalCount;
    }
};
