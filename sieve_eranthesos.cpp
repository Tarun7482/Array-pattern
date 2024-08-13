#include<iostream>

using namespace std;

int prime_sieve(int n){
    int i;
     int  prime[100]={0};
      for(i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
      }
    for( int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
    }

}
}
int main(){
    int n;
    cout<<"enter the to check the prime number"<<endl;
    cin>>n;
    prime_sieve(n);
    return 0;
}