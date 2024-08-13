#include<iostream>
using namespace std;

int main(){
     int n,i,j,top,left,right,down;
     cout<<"enter the no of the pattern";
     cin>>n;
     for(i=0;i<2*n-1;i++)
       {
        for(j=0;j<2*n-1;j++)
        {top=i;
        left=j;
        down=(2*n-2)-i;
        right=(2*n-2)-j;
            
        cout<<(n-(min(min(top,down),min(left,right))));
        cout<<" ";   
            }cout<<endl;
        }
       
       return 0;

}