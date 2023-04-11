#include <iostream>
#include <cmath>
using namespace std;

// float circle_area(int r){
//     float area=3.14*r*r;
//     return area;
// }

// bool check_Even(int n){
//     // if(n%2==0) 
//     if((n &1)==0)
//         return true;
//         else
//         return false;
// }

// long long int fact( long long int n){
//      long long int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;

// }
bool check_prime(int n){
    for(int i=2; i<=sqrt(n);i++){
   if(n%i==0)
        return false;
    }
   
    return true;
}

int main(){

// float r;
// cin >> r;
// float ans=circle_area(r);
// cout<<"Area of circle is "<<ans;

// int n;
// cin >> n;
// bool ans= check_Even(n);
// if(ans){
//     cout<<"Even"<<endl;
// }else{
//     cout<<"Odd"<<endl;
// }

// int n;
// cin >> n;
// long long ans= fact(n);
// cout<<ans<<endl;
  
  int n;
  cin >> n;

  for(int i=2; i<=n;i++){
    bool isprime=check_prime(i);
    if(isprime){
        cout<<i<<" ";
    }
  }
//   bool ans=check_prime(n);
//   if(ans){
//     cout<<"Prime number \n";
//   }
//   else{
//     cout << "Not a Prime \n";
//   }


    return 0;
}