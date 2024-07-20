#include <iostream>
#include <bits/stdc++>
using namespace std;
bool issafe(int arr[][100],int r,int c, int x, int y , int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }

    return true;
}

void nqueen(int arr[][100],int r,int c, int x, int n){
if(x>=n){
    for (int i = 0; i < r; i++)  
    { 
        for (int j = 0; j < c; j++) 
        { 
            cout << arr[i][j] << " "; 
        }     
        cout << endl; 
    } 
    return;
}
for(int col=0;col<n;col++){
   if(issafe(arr,r,c,x,col,n)){
    arr[x][col]=1;
     (nqueen(arr,r,c,x+1,n));
     arr[x][col]=0; //backtracking
   }
}
}
int main(){
    int n;
    cin>>n;
    
int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
              arr[i][j]=0;
                  }
    }

nqueen(arr,n,n,0,n);


    return 0;
}