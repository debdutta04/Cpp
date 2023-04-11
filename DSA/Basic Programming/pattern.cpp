#include <iostream>
using namespace std;
int main(){
//pattern 1:square pattern

    // int n;
    // cin >> n;

    // for(int i=0; i < n; i++){
    //     for(int j=0; j < n; j++){
    //         cout<< "* ";
    //     }
    //     cout << endl;
    // }

    //pattern 2: Hollow rectangle
          
    //       int rowCount,colCount;
    //       cin >> rowCount;
    //       cin >> colCount;

    //      for(int row=0; row<rowCount; row=row+1) {
    //   //first row or last row -> print 5 *
    //   if(row == 0  || row == rowCount-1 ){
    //       for(int col=0; col<colCount; col++) {
    //           cout << "* ";
    //       }
    //   }
    //   else {
    //       //remainging middle rows
    //       //first star
    //       cout << "* ";
    //       //spaces
    //       for(int i=0; i< colCount-2; i=i+1){
    //           cout << "  ";
    //       }
    //       //last star
    //       cout << "* ";
    //   }
    //   cout << endl;
    //  }

    //  //pattern 3: half pyramid

    //   int n;
    //   cin >> n;

    //  for(int i=0; i<n;i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<"* ";
    //     }
    //     cout << endl;
    //  }

//pattern 4: Inverted half pyramid

    //   int n;
    //   cin >> n;
      
    //  for(int i=0; i<n;i++){
    //     for(int j=0; j < n-i; j++){
    //         cout<<"* ";
    //     }
    //     cout << endl;
    //  }
      //pattern 5
      //number of rows -> n

    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //     for(int col=0; col<n-row; col = col+1) {
    //         cout << col+1 ;
    //     }
    //     cout << endl;
    // }
   
   //pattern 6: Inverted half pyramid using Number

    // int n;
    // cin >>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<j+1;
    //     }
    //     cout <<endl;
    // }
    // int n;
    // cin >>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //      for(int j=0; j<i+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    int n;
    cin >>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1;
            if(j != i){
                cout<< "*";
            }
        }
       
        cout<<endl;
    }

}