#include<iostream>
using namespace std;


int main(){
    int n,row,col,arr[20][20];
    cin>>n;
    int  row_start=0,row_end=2*n-2,col_start=0,col_end=2*n-2;
    while(row_start<=row_end&&col_start<=col_end){

     for(col=col_start;col<=col_end;col++){
        arr[row_start][col]=n; 
         cout<<arr[row_start][col]<<" ";
     }
     row_start++;
     for(row=row_start;row<=row_end;row++){
        arr[row][col_end]=n;
        cout<<arr[row][col_end]<<" ";}
        col_end--;
    cout<<endl;
    for(col=col_end;col>=col_start;col--){
        arr[row_end][col]=n;
        cout<<arr[row_end][col]<<" ";
    }
    row_end--;
    for(row=row_end;row>=row_start;row--){
        arr[row][col_start]=n;
        cout<<arr[row][col_start]<<" ";
    }
    col_start++;

    n--;
  
  }
  return 0;
}