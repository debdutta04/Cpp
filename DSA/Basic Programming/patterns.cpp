#include <iostream>
using namespace std;

int main(){
//half pyramid
// int n;
// cin >> n;

// for(int i=0; i < n; i++){
//    for(int j=0; j< i+1; j++){
//     cout<< "*";

//    }
//  cout<< endl;
// }


// Inverted half pyramid
// int n;
// cin >> n;

// for(int i=0; i < n; i++){
//    for(int j=0; j< n-i; j++){
//     cout<< "*";

//    }
//  cout<< endl;
// }

//Hollow inverted half pyramid

// int n;
// cin >>n ;
// for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         if( i==0 || j == 0 ||j== n - i - 1){
//             cout <<"*";
//         }
//         else{
//            cout << " ";
//         }

//     }
//     cout << endl;
// }


//Full pyramid

// int n; 
// cin >>n;

// for(int i=0; i<n ; i++){
//     //spaces
//     for (int j=0; j< n-i-1 ;j++){
//      cout << " ";
//     }
//     //stars
//     for (int j=0; j< i+1 ;j++){
//      cout << "* ";
//     }
// cout <<endl;
// }

//inverted full pyramid
// int n; cin >>n;

// for(int i=0; i<n; i++){
//     //spaces
//     for(int j=0; j<i;j++){
//     cout << " ";
//     }
//    //stars
//     for(int j=0; j< n-i;j++){
//     cout << "* ";
//     }
//     cout<< endl;
// }

//Hollow Full Pyramid
// int n; 
// cin >>n ;

// for(int i=0; i<n; i++){
 
//     for(int j=0; j<n-i-1; j++){
//         //spaces
//        cout<< " ";
//         }
//        for(int j=0; j<2*i+1; j++){
//       if(j==0|| i==n-1 || j==2*i)
//       cout<<"*";
//       else
//       cout<<" ";
//        }
//         cout<< endl;
   
// }


 //Numeric hollow pyramid
 int n;
 cin >>n;

 for(int i=0; i<n; i++){
    
    for(int j=0;j< n-i-1;j++){
         cout<<" ";
    }
    int start=1;
     for(int j=0;j< 2*-i+1;){
        if(j %2==0){
            cout<<start;
            start++;
        }
        
    }
    cout<<endl;
 } 
}

