#include<iostream>
using namespace std;

int main(){

        int i ,n,k,j,arr[20];
        cout<<"Enter the number of elements in the array: ";
        cin>>n;
        cout<<"Enter the elements of the array: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
        cout<<"second commit"<<endl;
        return 0;
             
}