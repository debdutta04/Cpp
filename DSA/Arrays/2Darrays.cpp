#include <iostream>
#include <limits.h>
using namespace std;

// void printRowWiseSum(int arr[][3],int rows,int cols){
  
//     for(int i=0; i<rows;i++){
//         int sum=0;
//         for(int j=0; j<cols;j++){
//         sum=sum+arr[j][i];
//         }
//         cout <<sum <<endl;
//     }
// }
// bool linearSearch(int arr[][3],int rows,int cols,int key){
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         if(arr[i][j]==key){
//             return true;
        
//         }
//     }
// }
// return false;
// }

// int getMax(int arr[][3],int rows,int cols){
//     int maxi=INT_MIN;
// for(int i=0;i<rows;i++){
//     for(int j=0; j<cols; j++){
//         if(arr[i][j]<maxi);
//         maxi=max(maxi,arr[i][j]);
//     }
// }
//  return maxi;
// }
// int getMin(int arr[][3],int rows,int cols){

//     int mini=INT_MAX;
// for(int i=0;i<rows;i++){
//     for(int j=0; j<cols; j++){
//         if(arr[i][j]<mini);
//         mini=min(mini,arr[i][j]);
//     }
// }
//  return mini;
// }
void Transpose(int arr[][3],int r,int c,int transpose[][3]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            transpose[j][i]=arr[i][j];
    }
}
}
void printArray(int a[][3],int row,int col){
    for(int i=0; i<row;i++){
    for(int j=0; j<col;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
//2D Array

int arr[3][3]={{1,2,3},{3,4,5},{6,7,80}};


// cout<< arr[1][2]<<endl;


// for (int i=0; i<3;i++){
//     for(int j=0; j<3;j++){

//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
// }
// int arr[3][3];
int rows=3;
int col=3;
//printRowWiseSum(arr,rows,col);
// for (int i=0;i<rows;i++){
//     for(int j=0;j<3;j++){
//         cin>> arr[i][j];
//     }
// }
// for (int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<< arr[i][j]<<" ";
//     }
//     cout <<endl;
// }
//int key= 17;
//cout<<linearSearch(arr,rows,col,key);
// cout <<"Max number "<<getMax(arr,3,3)<<endl;
// cout <<"Min number "<<getMin(arr,3,3)<<endl;



// for(int i=0; i<rows;i++){
//     for(int j=0; j<col;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
int transpose[3][3];

Transpose(arr,rows,col,transpose);
printArray(transpose,rows,col);

    return 0;
}