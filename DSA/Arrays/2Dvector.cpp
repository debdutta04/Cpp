#include <iostream>
#include <vector>
using namespace std;
void waveMartrixPrint(vector<vector<int>>arr){
int m=arr.size();
int n= arr[0].size();

for(int startcol=0;startcol<n;startcol++){
    //even no of col=T->B
    if((startcol & 1)==0){
        for(int i=0; i<m;i++){
            cout<<arr[i][startcol]<<" ";
        }
    }else{
        //odd no of col =B->T
        for(int i=m-1;i>=0;i--){
            cout<<arr[i][startcol]<<" ";
        }
    }
}
}
int main(){
  
//   vector<vector<int> >arr;

// int row=5;
// int col=5;
//   vector<int>a{1,2,3};
//    vector<int>b{2,4,6};
//    vector<int>c{1,3,7};

//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);
// vector<vector <int> >arr(5,vector<int>(5,-8));
//    cout<<arr[3][4]<<endl;
//     cout<<arr[2][3]<<endl;
//     for(int i=0; i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[2][3]<<" ";
//         }
//         cout<< endl;
//     }
vector<vector<int>>v{
{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
};
waveMartrixPrint(v);

    return 0;
}