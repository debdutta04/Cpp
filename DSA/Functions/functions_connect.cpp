#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printDigit(int x){
    while(x!=0){
    int digit=x%10;
    cout<<digit<<" ";
    x/=10;
}
}
void numUsingDigit(int digits[],int n){
    
    int ans=0;
    for(int i=0; i<n;i++){
       ans=ans*10+digits[i]; 
    }
    cout<<ans<<endl;
}
void numOfSetbits(int n){
    int count=0;
    while(n!=0){
        if(n&1){
      count++;
        }
        n=n>>1;
    }
    cout<<"Num of set bits "<<count;
    
}

int main()

{  
   
//    int x=98;
//    int y=sizeof(x++); 
    // int c=2^3;
    // cout<<c;
//     int km;
//      cout<<"Enter the value in km ";
//      cin >>km;
//    cout<<"value in miles is "<<1/1.609*km<<endl;
//     //int digits[]={8,7,9,5};
    //int n=3;
// int x;
// cout<<"Enter a number";
// cin >> x;
//printDigit(x);
//numUsingDigit(digits,n);
//numOfSetbits(n);
 return 0;
}