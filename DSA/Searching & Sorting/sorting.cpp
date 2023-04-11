#include <iostream>
using namespace std;
//selection sort
/*int  sort(int a[],int n){
    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j=i+1; j<n; j++){
       if(a[j]  > a[minindex]){
        minindex =j;
       }
       swap(a[minindex],a[j]);
        }
    }
}*/
//bubble sort optimise code

/*int sort(int arr[],int n){
    for(int i=0; i <n-1; i++){
        bool swapped =false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1])
        swap (arr[j],arr[j+1]);
        swapped = true;
        }if(swapped = false)
        break;
    }
}*/
// Insertion sort
int sort (int a[],int n){
    for (int i=1; i<n; i++){
         //shifting
        int temp = a[i];
        int j =i-1;
        for (;j >=0; j--){
            if(a[j] > temp){
                //shifting
                a[j+1] = a [j];
            }else {
                break;
            }
        }a[j + 1]=temp;
    }
}

int printArray(int a[],int n){
for (int i =0;i <n; i++){
    cout << a[i]<< " ";
}
}


int main (){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
      cin >> a[i];
    }
    sort(a,n);
    printArray(a,n);

    
    return 0;
}