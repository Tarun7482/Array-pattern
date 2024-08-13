#include<iostream>

using  namespace std;

char subsets(char arr[],int  n){
    int i,j;
    for(i=0;i<(1<<n);i++){
        for(j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    char arr[20];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
        cout<<"entet the element of set"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];}
            subsets(arr,n);
            return 0;
}