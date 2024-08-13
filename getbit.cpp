#include<iostream>

using namespace std;

  bool  getbit(int n,int pos){
     
     return((n&(1<<pos))!=0);
}
int setbit(int n1,int pos1){
    
    return(n1|(1<<pos1));


}

int clearbit(int n,int pos){
     return(n&(~(1<<pos)));

}

int updatbit(int n,int pos,int value){
     int mask=~(1<<pos);
       n =n&mask;
      return(n|value<<pos);

}
int main(){

    int n,pos,n1,pos1;
    cout<<"enter the number and position to know the bit"<<endl;
    cin>>n>>pos;
    cin>>n1,pos1;

    
    cout<<getbit(n,pos)<<endl;
    cout<<setbit(16,3)<<endl;
    cout<<clearbit(11,3)<<endl;
    cout<<updatbit(11,2,1)<<endl;

    return 0;
}