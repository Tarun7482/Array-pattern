//we will be extract the maximum sum of the subarray which is in the circular 
//To solve this problem we will be extract the non contributing element and the substract from the total sum of the array to that non contributing element
//we will be change the sign of the array element and then applay kadanes algorithm so that find the maximum sum of the subarry that 
//will be the sum of non contributing element which will be substracted from the total sum of the arrray

#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int i,currentsum=0;
    int maxsum=INT_MIN;
    for(i=0;i<n;i++){
        currentsum=currentsum+arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        if(maxsum<currentsum){
            maxsum=currentsum;
        }
        
}
return maxsum;
}

int main(){
    int n,i;
    cout<<"enter the number of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array";
    for(i=0;i<n;i++){
        cin>>arr[i];
}
  
  int nonwrapsum=kadane(arr,n);
  int totalsum=0;
  for(i=0;i<n;i++){
     totalsum+=arr[i];
     arr[i]=-arr[i];
  }
  int wrapsum=totalsum+kadane(arr,n);
  int maxSum=wrapsum;
  if (maxSum<nonwrapsum){
    maxSum=nonwrapsum;
  }
 
  cout<<"maximum sum of the subarray is "<<maxSum<<endl;
  return 0;
}