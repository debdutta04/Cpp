// // Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

// int fib(int n) {
// 	//base case
// 	if(n == 1) {
// 		//first term 
// 		return 0;
// 	}
// 	if(n == 2) {
// 		//second term
// 		return 1;
// 	}

// 	//RR -> f(n) = f(n-1) + f(n-2)
// 	int ans = fib(n-1) + fib(n-2);
// 	return ans;
// }

// void printCounting(int n) {
// 	//base case
// 	if(n == 0) {
// 		return;
// 	}

// 	//processing
// 	cout << n << " ";
// 	//re4ciursive relation
// 	printCounting(n-1);	
// }
int fact(int n){
	if(n==1)
		return 1;
	return n*fact(n-1);
}

 int main() {


// 	int n;
// 	cout << "Enter the term you want to see" << endl;
// 	cin >> n;

// 	int ans = fib(n);
// 	cout << n <<"th term is: " << ans << endl; 

    int n;
	cout << "Enter the value of n  " << endl;
	cin >> n;

	// printCounting(n);
	// cout << endl;

   cout<<fact(n);
	return 0;
}
