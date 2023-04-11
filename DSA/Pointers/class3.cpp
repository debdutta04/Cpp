#include <iostream>
using namespace std;

void solve(int** ptr) {
        //ptr = ptr + 1;

        //*ptr = *ptr + 1;

    
        **ptr = **ptr + 1;
}
// void solve(int& num ) {
//         num  = 50;
// } 

// void solve(int* val) {
//         *val = *val + 1;
// }

// void solve(int*& p) {
//         p = p + 1;
// }
int main() {
          int a = 5;
        int* p = &a;

        int** q = &p;
        cout << &a << endl;
        cout << a << endl;
        cout << p << endl;
        cout << &p << endl;
        cout << *p << endl;
        cout << q << endl;
        cout << &q << endl;
        cout << *q << endl;
        cout << **q << endl;

        int x = 12;
        int* p = &x;
        int** q = &p;
        solve(q);
        cout << x << endl;

  int a = 5;
  int* p = &a;
  int** ptr = &p;
  
  **ptr = **ptr + 1;

        int a = 5;
        //creating a reference variable
        int& b = a;

        cout << a << endl;
        cout << b << endl;

        a++;
        cout << a << endl;

        cout << b << endl;

        b++;
        cout << a << endl;
        cout << b << endl;

         // int a = 5;
        // solve(a) ;

        // cout << a << endl;

        // int a = 12;
        // int *p = &a;
        // solve(p);
        // cout << a << endl;

        // int a = 5;
        // int* p = &a;

        // cout << "before " << p << endl; 
        // solve(p);
        // cout << "After " << p << endl;

  return 0;
}