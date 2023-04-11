#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0; i<arr.size();i++){
//         ans=ans ^arr[i];
//     }
//     return ans;
// }

int main(){

//create vector

// vector<int>arr;

// // int ans =(sizeof(arr)/sizeof(int));
// // cout<< ans <<endl;

// cout<< arr.size() <<endl;
// cout<< arr.capacity() <<endl;

// //insert
// arr.push_back(5);
// arr.push_back(6);
// arr.push_back(7);

// //remove/delete
// arr.pop_back();
// //print
// for(int i=0; i<arr.size();i++){
//     cout<< arr[i]<<" ";
// }
// cout<<endl;
// vector <int>brr(10);
// cout<<"size of b "<<brr.size()<<endl;

// cout<<"printing crr";
// vector<int>crr{10,20,30};
// for(int i=0; i<crr.size();i++){
//     cout<< crr[i]<<" ";
// }
// cout<<endl;
// cout<<"is Empty or not "<<crr.empty()<<endl;

//FIND UNIQUE

// int n;
// cout<<"enter ehe size of array"<<endl;
// cin >> n;

// vector<int>arr(n);

// for(int i=0; i<arr.size();i++){
//     cin>>arr[i];
// }

// cout<<findUnique(arr);

 //UNION
// int arr[]= {1,3,5,7,9};
// int sizea= 5;
// int brr[]= {2,4,6,8};
// int sizeb= 4;

// vector<int>ans;

// for(int i=0; i<sizea;i++)
// {
//     ans.push_back(arr[i]);

// }
// for(int j=0; j<sizeb;j++){
//     ans.push_back(brr[j]);
// }
// cout<<"printing ans array ";
// for(int i=0; i< ans.size();i++){
//     cout << ans[i]<<" ";
// }

//INTERSECTION
//  vector<int>arr{1,2,3,4,6,8};
//  vector<int>brr{3,4,3,9,1,0};

//  vector<int>ans;
//  for(int i=0; i<arr.size();i++){
//  int element=arr[i];
//  for(int j=0; j<brr.size();j++){
//   if(element==brr[j]){
//     //mark 
//     brr[j]= INT_MIN;
//     ans.push_back(element);
//   }
//  }
// }
// //print ans
// cout<<"printing ans array ";
// for(auto value :ans){
//     cout <<value<<" ";
// }
// cout <<endl;

// cout <<endl;

//pair

// vector<int>arr{10,20,30,30,40};
// int sum=60;


// for(int i=0; i< arr.size();i++){
//         for(int j=i+1; j<arr.size();j++){
//          if(arr[i]+arr[j]==sum){
//             cout<< "pair found"<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//          }
            
//         }
//     }

//Sort 0 and 1s
vector<int>arr{1,0,1,0,1,0,0,0,1};

int start=0;
int end=arr.size() -1;
int i=0;
while(i!=end){
    if(arr[i]==0){
        swap(arr[start],arr[i]);
   i++;
   start++;

    }
    else{
    if(arr[i]==1){
        swap(arr[end],arr[i]);
       
        end--;
    }
    }
 }
 //print 
 for( auto value:arr){
    cout <<value<<" ";
 }

 cout<<endl;
    return 0;
}