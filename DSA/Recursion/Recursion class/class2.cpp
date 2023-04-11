#include <bits/stdc++.h>
using namespace std;

// void print(int arr[], int n){
//     //base case
// if(n==0){
//     return;
// }
// //ek case solve kardi 

// cout<<arr[0]<<" ";

// //baaki rec sambal lega;
// print(arr+1,n-1);
// }
// void sayDigit(int n,string arr[]){
//     if(n==0){
//         return;
//     }
//         int digit=n%10;
//         n=n/10;
//         sayDigit(n,arr);
//         cout<<arr[digit]<<" ";
    
//}

// void findMax(int arr[],int n,int i,int &maxi){
//     if(i>=n){
//         return ;
//     }

//     if(arr[i]>maxi){
//         maxi=arr[i];
//     }
//     findMax(arr,n,i+1,maxi);
// }
// void findMin(int arr[],int n,int i,int &mini){
//     if(i>=n){
//         return ;
//     }

//     if(arr[i]<mini){
//         mini=arr[i];
//     }
//     findMax(arr,n,i+1,mini);
// }
// int checkKey(string& str,int& n,int i,char& key,vector<int>&ans){
//     if(i>=n){
//         return -1;
//     }
//     if(str[i]==key)
//        { 
//     //  cout<<"Found at"<<i<<endl;
//     //  count++;
//     ans.push_back(i);
    
//        }
    
//     return checkKey(str,n,i+1,key,ans);
// }

// void printDigit(int &n){
// //base case
// if(n==0){
//     return;
// }

// int newVal=n/10;
// printDigit(newVal);
// int digit=n%10;
// cout<<digit<<" ";
// }
int getSum(int* arr,int n){

if(n==0){
    return 0;
}
if(n==1){
    return arr[0];
}
int remaining_part=getSum(arr+1,n-1);
int sum=arr[0]+remaining_part;
return sum;
}
int main(){

// int arr[]={1,30,21,17,18,19,66,8};
// int n=8;
//  int i=0;
// // print(arr,8);
// //int maxi=INT_MIN;
// int mini =INT_MAX;
// //findMax(arr,n,i,maxi);
// findMin(arr,n,i,mini);  
// //cout<<maxi<<endl;
// cout<<mini;

// string str="babbar";
// int n=str.length();
// int i=0;
// int count=0;
// char key='b';
// vector<int>ans;
//  checkKey(str,n,i,key,ans);
// for(auto val:ans){
//     cout<< val<<" ";
// }
// int n=647;

// printDigit(n);

// int n= 746;

// string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
// sayDigit(n,arr);
// cout<<endl<<endl;

int arr[]={10,20,30,40,50};
int n=5;
 

int sum=getSum(arr,n);
cout<<"sum is "<<sum;
    return 0;
}