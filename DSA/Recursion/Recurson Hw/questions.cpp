#include <iostream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void lastOccLTR(string &s,char x,int i,int &ans){
//base case
if(i>=s.size()){
    return;
}
if(s[i]==x){
    ans=i;}
    lastOccLTR(s,x,i+1,ans);
}

void lastOccRTL(string &s,char x,int i,int &ans){
//base case
if(i<0){
    return;
}
if(s[i]==x)
ans=i;
return;
}
void reverse(string& s,int start,int end){
//basecase
if(start>=end){
    return;
}
swap(s[start],s[end]);
reverse(s,start+1,end-1);
}
bool isPallindrome(string &s,int i,int j){
//base case
if(i>=j){
    return true;
}

if(s[i]!=s[j]){
    return false;
}
 isPallindrome(s,i+1,j-1);
}
void printSubarray_util(vector<int>&nums, int s,int e){
//base case
if(e==nums.size()){
    return;
}
//1 case
for(int i=s;i<=e;i++){
cout<<nums[i]<<"";
}cout<<endl;
//re call
printSubarray_util(nums,s,e+1);
}
void printSubarray(vector<int>&nums){
for(int start=0; start<nums.size();start++){
    int end=start;
    printSubarray_util(nums,start,end);
}

}
int main(){

vector<int>v{1,2,3,4,5};

printSubarray(v);
// { string s;
// cin >>s;
// cout <<isPallindrome(s,0,s.size()-1)<<endl;
// reverse(s,0,s.size()-1);
// cout<<s<<endl;

    // char s[]="Hellooo miss Debdutta";
    // char x='l';

   // char* ans;
//    ans= strchr(s,x);
    // lastOccLTR(s,x,0,ans);
   // cout<<ans<<endl;
 return 0;
}
