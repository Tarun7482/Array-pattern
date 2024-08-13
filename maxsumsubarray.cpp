#include<iostream>
using namespace std;

int main(){

    int i,j,n,arr[20],currsum[20];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements in the array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<=n;i++){
        currsum[i]=currsum[i-1]+arr[i];
    }
    int maxsum=-1000;
    for(i=0;i<=n;i++)
    {int sum=0;
        for(j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
             maxsum=max(sum,maxsum);
        }
    }
    cout<<maxsum;
    return 0;

}