/*int this case we have to find two unique number where rest number are present two times
//process first we will find the xorsum of all number after all the number which is two times that will be rzero 
//and we will get the xor of the two unique number 
ther in xor sum where one  present in the leftmost compare and find that position of 
1 bit number and apply xor sum after that we will find the first unique 
then xorsum( of first unique number and xorsum of both numner)
*/

#include<iostream>
using namespace std;

int Setbit(int n ,int pos){
    return((n&(1<<pos))!=0);
}

int unique(int arr[],int n)
{
     int i;
      int xorsum=0;
     for(i=0;i<n;i++){
        xorsum^=arr[i];
     }
     int temp=xorsum;
     int pos=-1;
      int setbit=xorsum;
      while(setbit!=1){
        setbit=setbit&1;
        pos++;
        setbit>>1;
      }
      int xorsum1=0;
      for(i=0;i<n;i++){
        if( Setbit (arr[i],pos)){
            xorsum1^=arr[i];
        }
     }
     cout<<"first unique number"<<xorsum1<<endl;
     cout<<"second unique number"<<(xorsum1^temp)<<endl;
    return 0;
}



int main(){

int arr[]={2,4,5,5,4,2,8,9};
unique(arr,8);
return 0;

}