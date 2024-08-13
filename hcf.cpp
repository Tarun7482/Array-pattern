#include<iostream>
using namespace std;


//using condition hcf of two number is equal to the hcf of substraction of both number
int hcf(int a,int b){
    while(b!=0){
        int sub=a-b;
        if(b>sub){
            a=b;
            b=sub;
        }else{
            a=sub;
           b=b;
        }
    }
    cout<<a<<endl;
    }

//Hcf using euclid method   if remainder of booth number will be zero then a will be the hcf other wise a =b and b= remainder of a and b
int HCF(int a,int b){
    if(b==0){
        cout<<a<<endl;
        }
        else{
            HCF(b,a%b);
            }
            }

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"HCF of "<<a<<" and "<<b<<" is ";
    hcf(a,b);
    cout<<endl;
    HCF(a,b);

    return 0;
}