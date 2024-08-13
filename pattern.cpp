#include<iostream>
using namespace std;


int main(){


    int n,i,j;
    cout<<"enter the number of  the pattern"<<endl;
    cin>>n;
    for(i=n;i>0;i--){
      for(j=1;j<=2*n;j++){
        if(j>i&&j<=2*n-i){
            cout<<" ";
        }
        else{
            cout<<i;
        }
      }
      cout<<endl;
    }
    for(i=2;i<=n;i++){
      for(j=1;j<=2*n;j++){
        if(j>i&&j<=2*n-i){
            cout<<" ";
        }
        else{
            cout<<i;
        }
      }
      cout<<endl;
    }
    return 0;
}