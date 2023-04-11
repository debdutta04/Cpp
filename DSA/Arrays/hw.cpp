#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveAllnegToLeft(int *arr,int n){
    //Dutch National Flag problem

    int l=0;
    int h= n-1;
    int i=0;
    while(l <= h){
        if(arr[l] < 0){
            l++;
        }
        else if(arr[h] > 0){
         h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
}
int main()
{

int a[]={1,2,-3,4,-5,6};
int n= sizeof(a)/sizeof(int);

moveAllnegToLeft(a,n);
for(int i=0; i<n; i++){
    cout<< a[i]<<" ";
}
 return 0;
}