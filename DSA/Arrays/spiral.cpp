

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m= matrix.size();
        int n= matrix[0].size();
        int total_elements= m*n;
        int count= 0;

        int startingRow=0;
        int endingCol=n-1;
        int endingRow=m-1;
        int startingCol=0;
        while(count < total_elements){
     //printing startingRow
 for(int i=startingCol; i<=endingCol; i++){
 ans.push_back(matrix[startingRow][i]);
 count++;
 }startingRow++;
 //printing endingcol
 for(int i=startingRow;i<=endingRow;i++){
    ans.push_back(matrix[i][endingCol]);
    count++;
 }endingCol--;
 //printing endingRow
 for(int i=endingCol; i>=startingCol;i--){
    ans.push_back(matrix[endingRow][i]);
    count++;
 }endingRow--;
 //printing startingCol
 for(int i=endingRow;i<=startingRow;i++){
    ans.push_back(matrix[i][startingCol]);
    count++;
 }startingCol++;
 
        }



        
    }