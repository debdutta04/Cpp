#include <iostream>
#include <limits.h>
using namespace std;

// bool linear_search(int arr[],int n,int key){
//     for(int i=0; i<n; i++){
//         if(arr[i]==key)
//         return true;
//     }
//     return false;
//  }
//  int count(int a[],int n){
//   int c=0;
//   for(int i=0; i<n; i++){
//     if(a[i]==2){
//         c++;
//     }
//   }
//    return c;
//  }
//  int max_num(int a[],int n){
//     int maxi=INT_MIN;
//     for(int i=0; i<n; i++){
//         if(a[i]>maxi){
//             maxi=a[i];
//         }
//     }
//     return maxi;
//  }
//  int min_num(int a[],int n){
//     int mini=INT_MAX;
//     for(int i=0; i<n; i++){
//         if(a[i]<mini){
//             mini=a[i];
//         }
//     }
//     return mini;
//  }

void extreme_print(int a[],int n){
    int i=0;
    int j=n-1;
    while(i>j)
  
    if(i==j){
        cout<< a[i]<<" ";
    }
    else{
        cout<< a[i]<<" ";
        cout<< a[j]<<" ";
        i++;
        j--;
    }
    
}
// void reverse(int arr[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//    int temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
//         i++;
//         j--;
//     }
// }
 int main(){
// int a[500];
// int n; 
// cout <<"Enter the size of the array";
// cin >> n;

// for(int i=0; i<n; i++){
//     cin >> a[i];
// }
// for(int i=0; i<n; i++){
//    cout<< a[i]*2 <<" ";
// }
// int key;

// int a[5]={10,23,44,54,67};
// bool ans=linear_search(a,5,10);
// if(ans)
// cout << "Present" <<endl;
// else
//     cout << "Absent" <<endl;

// cout<<"\nmaximum number is: "<<max_num(a,5);
// cout <<"\nminimum number is: "<<min_num(a,5);
 int a[6]={10,20,40,50,60,90};
 
// reverse(a,6);
extreme_print(a,6);
for(int i=0; i<6; i++){
    cout<<a[i]<<" ";
}
 
    return 0;
}