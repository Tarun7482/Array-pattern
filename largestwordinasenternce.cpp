#include<iostream>
#include<climits>
#include<string.h>
using namespace std;

int main(){
    int n=100;

    char arr[101];
   // cout<<"enter the sentence"<<endl;
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currentleng=0,maxlen=0;
   int start=0,maxstart=0;
    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(currentleng>maxlen)
            {maxlen=currentleng;
            maxstart=start;}
            currentleng=0;
            start=i+1;
        }
        else{
            currentleng++;
            if(arr[i]=='\0'){
                break;
            }
        }
        i++;
    }
      
      
    cout<<maxlen<<endl;
    for(i=0;i<=maxlen;i++){
          cout<<arr[maxstart+i];
          }

cout<<"successfully";
return 0;
}