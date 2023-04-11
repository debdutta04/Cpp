#include <iostream>
#include <vector>
using namespace std;

// bool checkSorted(vector<int>&arr,int& n,int i){

// //base case
// if(i==n-1){
//     return true;
// } 
//     if(arr[i+1]>arr[i])
//         return false;
    
//  return checkSorted(arr,n,i+1);
   
// }
// int binary_search(vector<int>&arr,int& s,int& e,int& key){

// if(s>e){
//     return -1;
// }
// int mid=s+(e-s)/2;
// if(arr[mid]==key){
//     return mid;
// }
//  s=mid+1; e= mid-1;
// if(arr[mid]<key ?binary_search(arr,s,e,key):binary_search(arr,s,e,key));

// }

// void printSubsequence(string str,string output,int i,vector<string>&v){
//     //base case
//     if(i>=str.length()){
//         //cout<<output<<endl;
//         v.push_back(output);
//         return;
//     }
//     //exclude 
// printSubsequence(str,output,i+1,v);

//     //include
//   //  output.push_back(str[i]);
//     printSubsequence(str,output+str[i],i+1,v);

// }
bool linearSearch(vector<int>arr,int n,int i,int key ){
  if(i>n){
    return false;
  }

  if(arr[i]==key){
    return true;
  }
  return linearSearch(arr,n,i+1,key);
}

int main(){
    vector<int>v{10,8,9,19,7};
    int n=v.size();
    int key=90;
    int i=0;

    bool ans=linearSearch(v,n,i,key);
    if(ans){
        cout<<"Key is present ";
    
    }else{
        cout<<"Key is absent ";
    }

// string str="abcd";
// string output="";
// int i=0;
// vector<string>v;

// printSubsequence(str,output,i,v);
// cout<<"printing all subsequences"<<endl;
// for(auto val:v){
//     cout<<val<<" "; 
// }
// vector<int>v{10,20,40,10,20};
// int n=v.size();
// int key=40;
// int s=0;
// int e=n-1;
// int ans=binary_search(v,s,e,key);
// cout<<"Ans is "<<ans;

// bool isSorted=checkSorted(v,n,i);
// if(isSorted){
//     cout<<"Array is sorted";
// }
// else{
//     cout<<"Array is not sorted";
// }

    return 0;
}