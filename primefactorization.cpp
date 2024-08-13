#include<iostream>
using namespace std;
//prime factorization using  loop only
int prime_factorization(int n){
    int i=2,j;
    while(i*i<=n){
        j=0;
        while(n%i==0){
            j++;
            n=n/i;
            }
            if(j>0){
                cout<<i<<"^"<<j<<" ";
                }
                i++;
                }
                
                if(n>1){
                    cout<<n<<"^"<<1<<" ";
                    }
                    return 0;
}

int Prime_fact(int n){
    int i=2,j;
    //prime factorization using loop and sieve eranthoses method
    int  spf[100]={};
    for(i=2;i<=n;i++)
    {
        if(spf[i]==0)
        {
            spf[i]=i;
    }
    }

    for(i=2;i<=n;i++){
        if(spf[i]==i){
            for(j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
   while(n!=1){
    cout<<spf[n]<<" ";
    n=n/spf[n];
   }

}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"prime factorization using loops only"<<endl;
    prime_factorization(n);
    cout<<"\nprime factorization using sieve eranthoses method"<<endl;
    Prime_fact(n);
    return 0;
}