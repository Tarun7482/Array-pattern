#include<iostream>
using namespace std;

int powof_2( int n){
     return(n&&!(n&n-1));

}
int no_of_ones( int n){
       int count=0;
       while(n){
        n=n&n-1;
        count++;
        
    }
    return count;


}
int main(){
  
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(powof_2(n)){
      cout<<n<<" is  power of 2"<<endl;
    }
    else
    cout<<n<<" is not a power of 2"<<endl;
    
    cout<<"Number of ones in binary representation of "<<n<<" is "<<no_of_ones(n)<<endl;
     return 0;

}