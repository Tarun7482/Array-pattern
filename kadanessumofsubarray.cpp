#include<iostream>
using namespace std;

int main(){
    int i ,n,arr[20];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {cin>>arr[i];}
    int currentsum=0;
    int maxsum=0;
    for(i=0;i<n;i++){
        currentsum=currentsum+arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        else if(currentsum>maxsum){
            maxsum=currentsum;
        }
    }

    cout<<maxsum;
    



}